// TP2.cpp : définit le point d'entrée pour l'application console.

#include "stdafx.h"




int _tmain(int argc, _TCHAR* argv[])
{
	Film table_film[20];
	

	Film film1={1,"FC",1999,"esz","efgh",120,action};
	Film *ptr_film=&film1;
	affiche_film( ptr_film );

	table_film[0] = film1;
	recherche_film( table_film, 1, "FC" );


	Acteur acteur1={"aa","bb",20051999,"M"};
	Acteur *ptr_acteur=&acteur1;
	affiche_acteur(ptr_acteur);

	Realisateur realisateur1={"cc","dd",20051999,"M"};
	Realisateur *ptr_realisateur=&realisateur1;
	affiche_realisateur(ptr_realisateur);

	system("pause");

	return 0;
}
