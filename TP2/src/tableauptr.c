#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11   // Taille des tableaux

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    srand(time(NULL));

    /* --------------------- REMPLISSAGE ALEATOIRE --------------------- */
    int *pi = tabInt;        // pointeur sur le tableau d'entiers
    float *pf = tabFloat;    // pointeur sur le tableau de floats

    for (int i = 0; i < TAILLE; i++) {
        *(pi + i) = rand() % 150;             // valeurs entre 0 et 149
        *(pf + i) = (rand() % 1000) / 100.0f; // valeurs entre 0.00 et 9.99
    }

    /* --------------------- AFFICHAGE AVANT --------------------- */
    printf("Tableau d'entiers (AVANT) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pi + i));
    }
    printf("\n");

    printf("Tableau de floats (AVANT) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pf + i));
    }
    printf("\n");


    /* --------------------- MANIPULATION VIA POINTEURS --------------------- */
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) { // indice divisible par 2
            *(pi + i) *= 3;
            *(pf + i) *= 3.0f;
        }
    }

    /* --------------------- AFFICHAGE APRES --------------------- */
    printf("\nTableau d'entiers (APRES) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pi + i));
    }
    printf("\n");

    printf("Tableau de floats (APRES) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pf + i));
    }
    printf("\n");

    return 0;
}
