#include <stdio.h>
#include <tchar.h>
#include "fonctions.h"

enum genres
{
	action,
	horreur,
	comedie,
	documentaire,
	policier,
	drame,
	animation,
	science_fiction
};

struct film
{
	int id_f;
	char titre[40];
	int annee;
	char nom_realisateur[40];
	int nom_acteur[4];
	int duree;
	genres genre1;
	genres genre2;
};

struct realisateur
{
	int id_r;
	char nom[40];
	char prenom[40];
	int date_naissance;
	char nationalite[20];
};

struct acteur
{
	int id_a;
	char nom[40];
	char prenom[40];
	int date_naissance;
	char nationalite[20];
};
