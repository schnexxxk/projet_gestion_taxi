#ifndef __TAXI__
#define __TAXI__

#include"chauffeur.h"


typedef struct Date{
	int jour;
	int mois;
	int annee;
}Date;

typedef struct Taxi{
	char plaque_immatriculation[9];
	char marque;
	float recette;
	Chauffeur *n;//tableau de chauffeur//
}Taxi;

void date();

Taxi enregistrement_taxi();
void afficher_taxi(Taxi t);
int recherchertaxi(Taxi tab[],int nbre);

#endif
