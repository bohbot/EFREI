// TP2.cpp : définit le point d'entrée pour l'application console.

#include <stdio.h>
#include <tchar.h>
#include "fonction.h"

int _tmain(int argc, _TCHAR* argv[])
{
	film table_film[20];


	film film1={1,"FC",1999,"esz","efgh",120,action};
	film *ptr_film=&film1;
	affiche_film( ptr_film );

	table_film[0] = film1;
	recherche_film( table_film, 1, "FC" );


	acteur acteur1={"aa","bb",20051999,"M"};
	acteur *ptr_acteur=&acteur1;
	affiche_acteur(ptr_acteur);

	realisateur realisateur1={"cc","dd",20051999,"M"};
	realisateur *ptr_realisateur=&realisateur1;
	affiche_realisateur(ptr_realisateur);

	system("pause");

	return 0;
}
