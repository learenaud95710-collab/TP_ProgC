#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];
    int i, valeurRecherchee, trouve = 0;

    srand(time(NULL)); // initialisation de la graine

    /* --------------------- REMPLISSAGE DU TABLEAU --------------------- */
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 2001) - 1000; // valeurs entre -1000 et +1000
    }

    /* --------------------- AFFICHAGE DU TABLEAU --------------------- */
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    /* --------------------- DEMANDE A L'UTILISATEUR --------------------- */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    /* --------------------- RECHERCHE DANS LE TABLEAU --------------------- */
    for (i = 0; i < TAILLE; i++) {
        if (tab[i] == valeurRecherchee) {
            trouve = 1;
            break; // pas besoin de continuer
        }
    }

    /* --------------------- AFFICHAGE DU RESULTAT --------------------- */
    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
