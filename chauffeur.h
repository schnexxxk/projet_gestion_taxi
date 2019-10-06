#ifndef __CHAUFFEUR__
#define __CHAUFFEUR__

typedef struct Chauffeur
{
    char nom[10];
    char id[8];//identifiant//
    char prenom[15];
    int contact[8];
    char sexe[1];
    
}Chauffeur;

Chauffeur enregistrementChauffeur();
void afficheChauffeur(Chauffeur c);
Chauffeur* rechercherChauffeur();
void modifierchauffeur(Chauffeur *r,Chauffeur f);

#endif