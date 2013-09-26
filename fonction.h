#include "stdafx.h"
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
} Genres;

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
} Film;

typedef struct realisateur
{
	char nom[40];
	char prenom[40];
	int date_naissance;
	char nationalite[20];
} Realisateur;

typedef struct acteur
{
	char nom[40];
	char prenom[40];
	int date_naissance;
	char nationalite[20];
} Acteur;

void affiche_film( Film* );
void affiche_realisateur( Realisateur* );
void affiche_acteur( Acteur* );
void recherche_film( Film[], int, char );
