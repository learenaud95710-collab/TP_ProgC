#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100
#define MAX_DISTINCTES 100

typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

/* Fonction pour comparer deux couleurs : retourne 1 si identiques */
int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.R == c2.R && c1.G == c2.G && c1.B == c2.B && c1.A == c2.A);
}

/* Fonction pour afficher une couleur */
void afficher_couleur(Couleur c) {
    printf("%02x %02x %02x %02x", c.R, c.G, c.B, c.A);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurDistincte distinctes[MAX_DISTINCTES];
    int nb_distinctes = 0;

    srand(time(NULL));

    /* --------------------- REMPLISSAGE DU TABLEAU --------------------- */
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    /* --------------------- COMPTER LES COULEURS DISTINCTES --------------------- */
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
