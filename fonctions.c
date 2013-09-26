
#include "stdafx.h"

void affiche_film( Film* ptr_film )
{
	Film film1=*ptr_film;
	printf("Fiche FILM\n");
	printf("Titre : %s (%d)\n",film1.titre,film1.annee);
	printf("Realisateur : %s\n",film1.nom_realisateur);
	printf("Acteurs : %s\n",film1.nom_acteur);
	printf("Duree : %d\n",film1.duree);
	printf("Genre : %s\n",film1.genre1);
}

void affiche_acteur( Acteur* ptr_acteur )
{
	Acteur acteur1=*ptr_acteur;
	printf("Fiche ACTEUR\n");
	printf("Nom : %s %s\n",acteur1.nom, acteur1.prenom);
	printf("Date de naissance : %d\n",acteur1.date_naissance);
	printf("Nationalite : %s\n",acteur1.nationalite);
}

void affiche_realisateur( Realisateur* ptr_realisateur )
{
	Realisateur realisateur1=*ptr_realisateur;
	printf("Fiche ACTEUR\n");
	printf("Nom : %s %s\n",realisateur1.nom, realisateur1.prenom);
	printf("Date de naissance : %d\n",realisateur1.date_naissance);
	printf("Nationalite : %s\n",realisateur1.nationalite);
}


void recherche_film( Film[] table_film, int taille_tab, char nom_film )
{
	for ( int i=0; i<taille_tab; i++ )
	{
		if ( table_film[i].nom == nom_film )
		{
				printf("Fiche FILM\n");
				printf("Titre : %s (%d)\n",.titre,film1.annee);
				printf("Realisateur : %s\n",film1.nom_realisateur);
				printf("Acteurs : %s\n",film1.nom_acteur);
				printf("Duree : %d\n",film1.duree);
				printf("Genre : %s\n",film1.genre1);
		}
