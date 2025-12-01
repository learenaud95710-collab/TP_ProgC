#include <stdio.h>

int main() {
    // Tableaux pour stocker les données de 5 étudiant.e.s
    char noms[5][30] = {
        "Dupont", "Martin", "Durand", "Bernard", "Leroy"
    };

    char prenoms[5][30] = {
        "Alice", "Thomas", "Julie", "Marc", "Sophie"
    };

    char adresses[5][50] = {
        "12 rue Victor Hugo",
        "5 avenue de Paris",
        "33 boulevard National",
        "8 chemin Vert",
        "21 rue de la Gare"
    };

    // Notes des étudiant.e.s
    float note_prog[5]  = {15.5, 12.0, 18.0, 10.5, 14.0};
    float note_sys[5]   = {14.0, 13.5, 17.0, 11.0, 16.0};

    // Affichage des informations
    printf("===== LISTE DES ETUDIANTS =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom        : %s\n", noms[i]);
        printf("Prenom     : %s\n", prenoms[i]);
        printf("Adresse    : %s\n", adresses[i]);
        printf("Note C     : %.2f\n", note_prog[i]);
        printf("Note SE    : %.2f\n", note_sys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
