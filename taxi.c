#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"chauffeur.h"
#include"taxi.h"


void date(){
	Date d;
    
    printf("entrez les dates d'intervention \n ");
    printf("la date doit etre sous cette forme \n");
    printf("xx/xx/xxxx \n");
	printf("entrez le mois:\n");
	scanf("%d",d.mois);

         while(d.mois<=0  || d.mois>12){
         	printf("ERREUR \n");
         	printf("entrez le mois:\n");
         	scanf("%d",d.mois);
         }
	printf("entrez le jour:\n");
	scanf("%d",d.jour);
	      while(d.jour<=0){
	      	printf("ERREUR \n");
            printf("entrez le jour:\n");
	      	scanf("%d",d.jour);
	      }
          if(d.mois==01 || d.mois==03 || d.mois==05 || d.mois==07 || d.mois==8 || d.mois==12 || d.mois==10){
          	while(d.jour>31){
          		printf("ces mois-ci ne comptent que 31 jours \n");
          		printf("entrez le jour:\n");
          		scanf("%d",d.jour);
          	}
          }
              if(d.mois=02){
              	while(d.jour>29){
                     printf("ces mois-ci ne comptent que 28 jours \n");
                     printf("entrez le jour:\n");
                     scanf("%d",d.jour);
              	}
              }
	               if(d.mois==06 || d.mois==11 ||  d.mois==04 || d.mois==9 ){
	               	 while(d.jour>30){
	               	 	printf("ces mois-ci ne comptent que 30 jours \n");
	               	 	printf("entrez le jour:\n");
	               	 	scanf("%d",d.jour);
	               	 }
	               }
	                   if(d.mois==9){
	                   	while(d.jour>29){
	                   	   printf("ces mois-ci ne comptent que 29 jours \n");	
	                   	   printf("entrez le jour:\n");
	                   	   scanf("%d",d.jour);
	                   	}
	                   }
    printf("%s/%s  2019",d.jour,d.mois);

}


Taxi enregistrement_taxi(){

	Taxi t;
	printf("entrez la plaque d'immatriculation du taxi:\n");
	scanf("%s",t.plaque_immatriculation);
	printf("entrez la marque du taxi:\n");
	scanf("%s",t.marque);
	printf("entrez la recette produite par le taxi:\n");
	scanf("%f",t.recette);
	printf("entrez le nom du chauffeur en question:\n");
	scanf("%s",t.n->nom);
	return t;
	
    
}

void afficher_taxi(Taxi t){

	printf("LA PLAQUE D'IMMATRICULATION:\n%s",t.plaque_immatriculation);
	printf("LA MARQUE DU TAXI:\n%s",t.marque);
	printf("RECETTE PRODUITE:\n%f",t.recette);

}

int recherchertaxi(Taxi tab[],int nbre){
char plaque_immat[20];
	printf("IMMATRICULATION DE LA VOITURE A CHERCHER: \n");
	scanf("%s",plaque_immat);

	for(int i=0;i<nbre;++i){
		if(strcmp(plaque_immat,tab[i].plaque_immatriculation)==0){
            return i;
		}
	}
 return -1;
}