#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include"chauffeur.h"



Chauffeur enregistrementChauffeur(){
	Chauffeur ch;
	

    printf("VEUILLEZ ENTRER LES INFOS POUR L'ENREGISTREMENT DU CHAUFFEUR\n");
    printf("NOM:\n ");
    scanf("%s",ch.nom);
    printf("PRENOM:\n ");
    scanf("%s",ch.prenom);
    printf("MATRICULE:\n");
    scanf("%s",ch.id);
    printf("CONTACT: ");
    scanf("%d",&ch.contact);
    printf("SEXE:\n ");
    scanf("%c",ch.sexe);

    return ch;

}


void afficheChauffeur(Chauffeur c){

  printf("NOM: %s\n",c.nom);
  printf("PRENOM: %s\n",c.prenom);
  printf("MATRICULE:%s\n",c.id);
  printf("CONTACT: %d\n",c.contact);
  printf("SEXE:%c\n",c.sexe);

}

Chauffeur* rechercherChauffeur(char matricule[8],Chauffeur *m){
	printf("entrez le matricule du chauffeur en question:\n");
	scanf("%s",matricule);

	for(int i=0,i<taille;i++){
		if(strcmp(matricule,m->id)==0){
			return m+i;
		}

	}
    return NULL;
}


void modifierchauffeur(Chauffeur *r,Chauffeur f){
	strcpy(r->nom,f.nom);
	strcpy(r->prenom,f.prenom);
	strcpy(r->id,f.id);
	r->contact=f.contact;
	strcpy(r->sexe,f.sexe);
}