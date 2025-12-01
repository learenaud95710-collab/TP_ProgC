#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];
    int i, j, temp;
    int valeurRecherchee;
    int debut, fin, milieu;
    int trouve = 0;

    srand(time(NULL));

    /* --------------------- REMPLISSAGE DU TABLEAU --------------------- */
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 2001) - 1000; // valeurs aléatoires entre -1000 et +1000
    }

    /* --------------------- TRI DU TABLEAU (tri à bulles) --------------------- */
    for (i = 0; i < TAILLE - 1; i++) {
        for (j = 0; j < TAILLE - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    /* --------------------- AFFICHAGE DU TABLEAU TRIE --------------------- */
    printf("Tableau trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    /* --------------------- DEMANDE À L'UTILISATEUR --------------------- */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    /* --------------------- RECHERCHE DICHOTOMIQUE --------------------- */
    debut = 0;
    fin = TAILLE - 1;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tab[milieu] == valeurRecherchee) {
            trouve = 1;
            break;
        }
        else if (valeurRecherchee < tab[milieu]) {
            fin = milieu - 1;
        }
        else {
            debut = milieu + 1;
        }
    }

    /* --------------------- RÉSULTAT --------------------- */
    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
