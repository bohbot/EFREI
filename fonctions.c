#include <stdio.h>
#include "fonctions.h"
#include <time.h>

void affiche_genre(int genre)
{
	switch( genre )
	{
		case 0:
			printf("Action");
		break;
		case 1:
			printf("Horreur");
		break;
		case 2:
			printf("Comedie");
		break;
		case 3:
			printf("Documentaire");
		break;
		case 4:
			printf("Policier");
		break;
		case 5:
			printf("Drame");
		break;
		case 6:
			printf("Animation");
		break;
		case 7:
			printf("Science Fiction");
		break;
	}
}

void affiche_film( Film* ptr_film )
{
	Film film1=*ptr_film;
	printf("Fiche FILM\n");
	printf("Titre : %s (%d)\n",film1.titre,film1.annee);
	printf("Realisateur : %s\n",film1.nom_realisateur);
	printf("Acteurs : %s",film1.nom_acteur1);
	if (film1.nom_acteur2 != "")
		printf(", %s",film1.nom_acteur2);
	if (film1.nom_acteur3 != "")
		printf(", %s",film1.nom_acteur3);
	if (film1.nom_acteur4 != "")
		printf(", %s",film1.nom_acteur4);
	printf("\n");
	printf("Duree : %d min\n",film1.duree);
	printf("Genre : ");
	affiche_genre(film1.genre1);
	printf("\n");
}

void affiche_acteur( Acteur* ptr_acteur )
{
	Acteur acteur1=*ptr_acteur;
	printf("Fiche ACTEUR\n");
	printf("Nom : %s %s\n",acteur1.nom, acteur1.prenom);
	printf("Date de naissance : %d-%s-%d\n",acteur1.jour_naissance, acteur1.mois_naissance, acteur1.annee_naissance);
	printf("Nationalite : %s\n",acteur1.nationalite);
}

void affiche_realisateur( Realisateur* ptr_realisateur )
{
	Realisateur realisateur1=*ptr_realisateur;
	printf("Fiche REALISATEUR\n");
	printf("Nom : %s %s\n",realisateur1.nom, realisateur1.prenom);
	printf("Date de naissance : %d-%s-%d\n",realisateur1.jour_naissance, realisateur1.mois_naissance, realisateur1.annee_naissance);
	printf("Nationalite : %s\n",realisateur1.nationalite);
}


void recherche_film( Film *table_film, int taille_tab, char *titre_film )
{
	char genre[60];
	for ( int i=0; i<taille_tab; i++ )
	{
		if ( !strcmp(table_film[i].titre, titre_film) )
		{
			printf("Fiche FILM\n");
			printf("Titre : %s \n",table_film[i].titre);
			printf("Realisateur : %s\n",table_film[i].nom_realisateur);
			printf("Acteurs : %s\n",table_film[i].nom_acteur1);
			if (table_film[i].nom_acteur2 != "")
				printf(", %s",table_film[i].nom_acteur2);
			if (table_film[i].nom_acteur3 != "")
				printf(", %s",table_film[i].nom_acteur3);
			if (table_film[i].nom_acteur4 != "")
				printf(", %s",table_film[i].nom_acteur4);
			printf("\n");
			printf("Duree : %d\n",table_film[i].duree);
			printf("Genre : ");
			affiche_genre(table_film[i].genre1);
			printf("\n");
		}
	}
}

void affiche_filmographie_acteur( Film *table_film, int taille_tab, char *nom_acteur )
{
	printf("Resultats : %s\n", nom_acteur);
	for ( int i=0; i < taille_tab; i++ )
	{
		if ( !strcmp(table_film[i].nom_acteur1, nom_acteur) )
		{
			printf( "%s (%d) \n", table_film[i].titre, table_film[i].annee );
		}
		else if ( !strcmp(table_film[i].nom_acteur2, nom_acteur) )
		{
			printf( "%s (%d) \n", table_film[i].titre, table_film[i].annee );
		}		
		else if ( !strcmp(table_film[i].nom_acteur3, nom_acteur) )
		{
			printf( "%s (%d) \n", table_film[i].titre, table_film[i].annee );
		}
		else if ( !strcmp(table_film[i].nom_acteur4, nom_acteur) )
		{
			printf( "%s (%d) \n", table_film[i].titre, table_film[i].annee );
		}
	}
}

void affiche_filmographie_realisateur( Film *table_film, int taille_tab, char *nom_realisateur )
{
	printf("Resultats : %s\n", nom_realisateur);
	for ( int i=0; i < taille_tab; i++ )
	{
		if ( !strcmp(table_film[i].nom_realisateur, nom_realisateur) )
		{
			printf( "%s (%d) \n", table_film[i].titre, table_film[i].annee );
		}
	}
}
