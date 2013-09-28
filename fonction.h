#include <stdio.h>
#include <tchar.h>
#ifndef fonction.h
#define fonction.h

typedef enum genres
{
	action,
	horreur,
	comedie,
	documentaire,
	policier,
	drame,
	animation,
	science_fiction
} Genres;

typedef struct film
{
	int id_f;
	char titre[40];
	int annee;
	char nom_realisateur[40];
	char nom_acteur1[40];
	char nom_acteur2[40];
	char nom_acteur3[40];
	char nom_acteur4[40];
	int duree;
	genres genre1;
	genres genre2;
} Film;

typedef struct realisateur
{
	int id_realisateur;
	char nom[40];
	char prenom[40];
	int jour_naissance;
	char mois_naissance[40];
	int annee_naissance;
	char nationalite[20];
} Realisateur;

typedef struct acteur
{
	int id_acteur;
	char nom[40];
	char prenom[40];
	int jour_naissance;
	char mois_naissance[40];
	int annee_naissance;
	char nationalite[20];
} Acteur;

void affiche_film( Film* );
void affiche_realisateur( Realisateur* );
void affiche_acteur( Acteur* );
void recherche_film( Film, int, char );
void affiche_filmographie_acteur( Film, int, char );
void affiche_filmographie_realisateur( Film, int, char );
void affiche_genre( int );

#endif
