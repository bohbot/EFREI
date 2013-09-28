
#include <stdio.h>
#include <tchar.h>
#include "fonction.h"

void affiche_film( film* ptr_film )
{
	film film1=*ptr_film;
	printf("Fiche FILM\n");
	printf("Titre : %s (%d)\n",film1.titre,film1.annee);
	printf("realisateur : %s\n",film1.nom_realisateur);
	printf("Acteurs : %s\n",film1.nom_acteur);
	printf("Duree : %d\n",film1.duree);
	printf("Genre : %s\n",film1.genre1);
}

void affiche_acteur( acteur* ptr_acteur )
{
	acteur acteur1=*ptr_acteur;
	printf("Fiche Acteur\n");
	printf("Nom : %s %s\n",acteur1.nom, acteur1.prenom);
	printf("Date de naissance : %d\n",acteur1.date_naissance);
	printf("Nationalite : %s\n",acteur1.nationalite);
}

void affiche_realisateur( realisateur* ptr_realisateur )
{
	realisateur realisateur1=*ptr_realisateur;
	printf("Fiche Realisateur\n");
	printf("Nom : %s %s\n",realisateur1.nom, realisateur1.prenom);
	printf("Date de naissance : %d\n",realisateur1.date_naissance);
	printf("Nationalite : %s\n",realisateur1.nationalite);
}


void recherche_film( film table_film[], int taille_tab, char nom_film )
{
    int i;
	for (i=0;i<taille_tab;i++)
	{
		if ( table_film[i].titre == nom_film )
		{
		    film film1=table_film[i];
			printf("Fiche FILM\n");
			printf("Titre : %s (%d)\n",film1.titre,film1.annee);
			printf("realisateur : %s\n",film1.nom_realisateur);
			printf("Acteurs : %s\n",film1.nom_acteur);
			printf("Duree : %d\n",film1.duree);
			printf("Genre : %s\n",film1.genre1);
		}
	}
	return;
}
