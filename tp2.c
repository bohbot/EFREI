#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.c"

int _tmain(int argc, _TCHAR* argv[])
{
	Film *table_film;
	Acteur *table_acteur;
	Realisateur *table_realisateur;
	char nom_film[40] = "AA";
	int i=3, j=8, k=3, choix;
	table_film = (Film *)malloc(i*sizeof(Film));
	table_acteur = (acteur *)malloc(j*sizeof(acteur));
	table_realisateur = (realisateur *)malloc(k*sizeof(realisateur));

	Film film1={1,"Figth Club",1999, "Edward Norton", "Brad Pitt", "Helena Bonham Carter", "", "David Fincher", 135, action};
	Film film2={2, "Sixieme Sens", 1991, "Bruce Willis", "", "", "", "Night Shyamalan", 108, drame};
	Film film3={3, "Inception", 2010, "Leonardo DiCaprio", "Marion Cotillard", "Tom Hardy", "Joseph Gordon-Levitt", "Christopher Nolan", 148, science_fiction};
	Film *ptr_film=&film1;

	
	table_film[0] = film1;
	table_film[1] = film2;
	table_film[2] = film3;

	Acteur acteur1={1, "Norton", "Edward", 18, "aout", 1969, "Americain"};
	Acteur acteur2={2, "Pitt", "Brad", 18, "decembre", 1963, "Americain"};
	Acteur acteur3={3, "Bonham Carter", "Helena", 26, "mai", 1966, "Americain"};
	Acteur acteur4={4, "Willis", "Bruce", 19, "avril", 1955, "Americain"};
	Acteur acteur5={5, "DiCaprio", "Leonardo", 11, "novembre", 1974, "Americain"};
	Acteur acteur6={6, "Cotillard", "Marion", 30, "octobre", 9975, "Français"};
	Acteur acteur7={7, "Hardy", "Tom", 15, "septembre", 1977, "Britanique"};
	Acteur acteur8={8, "Gordon-Levitt", "Joseph", 17, "fevrier", 1981, "Americain"};
	Acteur *ptr_acteur=&acteur1;

	Realisateur realisateur1={1,"Fincher","David",28, "aout", 1962,"Americain"};
	Realisateur realisateur2={2,"Shyamalan","Night",6, "aout", 1970,"Americain"};
	Realisateur realisateur3={3,"Nolan","Christopher",30, "juillet", 1970,"Britanique"};
	Realisateur *ptr_realisateur=&realisateur1;

	printf ("bienvenue\n Que voulez vous faire ?\n afficher un film taper 1\n faire une recherche sur un film taper 2\n afficher les information sur un acteur taper 3\n afficher les information sur un realisateur taper 4\n ajouter un film") ;
	scanf("%d", &choix);

	if (choix == 1)
		affiche_film( ptr_film );
	else if (choix ==2)
		recherche_film( table_film, i, nom_film );
	else if (choix ==3)
		affiche_acteur(ptr_acteur);
	else if (choix ==4)
		affiche_realisateur(ptr_realisateur);
//	else if (choix ==5)
		//modifier

	affiche_filmographie_acteur( table_film, i, acteur1.nom );
	affiche_filmographie_realisateur( table_film, i, realisateur1.nom );

	system("pause");

	return 0;
}
