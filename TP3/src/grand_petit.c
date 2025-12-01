#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];
    int i;

    srand(time(NULL)); // initialisation de la graine du générateur

    /* --------------------- REMPLISSAGE DU TABLEAU --------------------- */
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 1000) + 1; // valeurs entre 1 et 1000
    }

    /* --------------------- RECHERCHE PLUS PETIT & PLUS GRAND --------------------- */
    int min = tab[0];
    int max = tab[0];

    for (i = 1; i < TAILLE; i++) {
        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    /* --------------------- AFFICHAGE DU RESULTAT --------------------- */
    printf("Le plus petit nombre du tableau est : %d\n", min);
    printf("Le plus grand nombre du tableau est : %d\n", max);

    return 0;
}
