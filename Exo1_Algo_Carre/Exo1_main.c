#include <stdio.h>
#include <stdlib.h>

/*
ALGORITHME: TP_Carré
//BUT: Tracer un rectangle avec des caractères
//ENTREE: Utilisateur entre la longueur et la largeur du rectangle
//SORTIE: Un rectangle est tracé et rempli

Var : larg , Long , i , j:entier;

DEBUT
    larg->0
    Long->0

    ECRIRE "Entrez la longueur et la largeur du rectangle"
    LIRE Long
    LIRE larg
    POUR i DE 1 A larg FAIRE
    DEBUT
        POUR j DE 1 A Long FAIRE
        DEBUT
            SI (i=1 OU i=larg) OU (j=1 OU j=Long) ALORS
            DEBUT
                ECRIRE "*"
            FIN
            SINON
                ECRIRE "#"
            FIN SI
            j=j+1

        FIN POUR
        i=i+1
    FIN POUR

FIN
*/


int main()
{
    int larg=0; //Variable régissant la largeur du rectangle
    int Long=0; //Variable régissant la longeur du rectangle
    int i=0;    //Variable gérant la boucle POUR comptant la largeur
    int j=0;    //Variable gérant la boucle POUR comptant la longeur

    printf("veuillez entrer la longueur et la largeur du rectangle\n");
    scanf("%d",&Long);      //Saisie par l'utilisateur de la longueur et la largeur du rectangle
    scanf("%d",&larg);

    for (i=0;i<=larg;i++){
        for(j=0;j<=Long;j++){
            if(i==0 || i==larg || j==0 || j==Long){     //Vérification de la position des bordures
                printf("*");    //Application du caractère * a la bordure du rectangle
            }else{                                      //Vérification du milieu
                printf("+");    //Application du caractère + au centre du rectangle
            }
        }
        printf("\n");           //Retour chariot en fin de chaque "ligne" afin de tracer le rectangle
    }
    return 0;
}
