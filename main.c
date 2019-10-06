#include<stdlib.h>
#include<stdio.h>
#include"chauffeur.h"
#include"taxi.h"

Taxi *tab;//tableau de type Taxi//
int nbre;//nombre taxi//
int nbre_chauffeur;//nombre chauffeur//
Chauffeur *k;
Taxi *a;

int b;
int y;
int q;

int menu_chauffeur();
int menu();

int main(){

	printf("entrez le nombre de taxi:\n");
	scanf("%d",&nbre);
	printf("entrez le nombre de chauffeur:\n");
	scanf("%d",&nbre_chauffeur);
	k=(Chauffeur *)malloc( nbre_chauffeur *sizeof(Chauffeur));
    tab=(Taxi *)malloc(nbre * sizeof(Taxi));

    y=menu_choix();
    if(y==1){
      b=menu_chauffeur();
        
    }
    if (y==2)
    {
    	 b=menu();//menu information sur taxi//
    }
   

    if(b==1){
    	tab[nbre]=enregistrement_taxi();
    }
    
    if(b==2){
       void afficher_taxi(Taxi t);
    }

    if(b==3){
    	int a=recherchertaxi(tab, nbre);
}

	return 0;
}

int menu(){
	int choix;
  printf("que voulez faire?\n");
  printf("tapez 1 pour enregistrer le taxi \n");
  printf("tapez 2 pour afficher le taxi \n");
  printf("tapez 3 pour rechercher le taxi \n");
  scanf("%d",&choix);


  return choix;

}

int menu_chauffeur(){

	int choix1;

	printf("que voulez-vous faire\n");
	printf("tapez 1 pour enregistrer le chauffeur\n");
	printf("tapez 2 pour afficher le chauffeur \n");
	printf("tapez 3 pour afficher rechercher le chauffeur\n");
	printf("tapez 4 pour modifier le chauffeur\n");
	scanf("%d",&choix1);

	return choix1;
}

int menu_choix(){

	int choix2;

	printf("voulez-vous avoir acces aux informations concernant les taxis ou les informations concernant les chauffeurs\n");
	printf("tapez 1 pour avoir acces aux informations concernant les taxis\n ");
	printf("tapez 2 pour avoir acces aux informations concernant les chauffeurs\n");
	scanf("%d",&choix2);
	return choix2;
}