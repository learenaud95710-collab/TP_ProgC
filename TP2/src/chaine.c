#include <stdio.h>

int main() {
    char chaine1[100];
    char chaine2[100];
    char copie[100];
    char concat[200];

    int i, j;

    // --- Saisie des chaînes ---
    printf("Entrez la première chaîne : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaîne : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    // ---------- 1) Calcul de longueur ----------
    int longueur1 = 0;
    while (chaine1[longueur1] != '\0' && chaine1[longueur1] != '\n') {
        longueur1++;
    }

    int longueur2 = 0;
    while (chaine2[longueur2] != '\0' && chaine2[longueur2] != '\n') {
        longueur2++;
    }

    printf("\nLongueur de la première chaîne : %d\n", longueur1);
    printf("Longueur de la deuxième chaîne : %d\n", longueur2);

    // ---------- 2) Copie de chaine1 dans copie ----------
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("\nCopie de la première chaîne : %s", copie);

    // ---------- 3) Concaténation chaine1 + chaine2 ----------
    // Copie de chaine1 dans concat
    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    // Ajout de chaine2 dans concat (sans écraser)
    j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}
