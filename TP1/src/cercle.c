#include <stdio.h>
#include <math.h>   // Pour M_PI (optionnel)

int main() {
    float rayon;       // ou double selon vos besoins
    float aire, perimetre;
    
    // 1. Mettre la valeur du rayon
    rayon = 5.0f;  // Exemple de rayon (modifiable)
    
    // 2. Calcul de l'aire (utilisation de M_PI si disponible)
    aire = (float)(M_PI * rayon * rayon);  
    // Si vous ne voulez pas utiliser M_PI :
    // aire = 3.14159f * rayon * rayon;
    
    // 3. Calcul du périmètre
    perimetre = (float)(2 * M_PI * rayon);
    // Version sans M_PI :
    // perimetre = 2 * 3.14159f * rayon;
    
    // 4. Affichage des résultats
    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle   : %.2f\n", aire);
    printf("Perimetre        : %.2f\n", perimetre);

    return 0;
}



