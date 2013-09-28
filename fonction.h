#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>

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
} genres;

typedef struct film
{
	int id_f;
	char titre[40];
	int annee;
	char nom_realisateur[40];
	char nom_acteur[40];
	int duree;
	genres genre1;
	genres genre2;
} film;

typedef struct realisateur
{
	char nom[40];
	char prenom[40];
	int date_naissance;
	char nationalite[20];
} realisateur;

typedef struct acteur
{
	char nom[40];
	char prenom[40];
	int date_naissance;
	char nationalite[20];
} acteur;

void affiche_film( film* );
void affiche_realisateur( realisateur* );
void affiche_acteur( acteur* );
void recherche_film( film[], int, char );
