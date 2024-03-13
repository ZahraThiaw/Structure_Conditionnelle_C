#include <stdio.h>

int main() {
    int choix;
    float R1, R2, R3, resultat_R;

    // Demander à l'utilisateur de saisir son choix
    printf("Veuillez entrer votre choix (1 pour série, 2 pour parallèle) : ");
    scanf("%d", &choix);

    // Demander à l'utilisateur de saisir les valeurs des résistances
    printf("Veuillez entrer la valeur de R1 : ");
    scanf("%f", &R1);
    printf("Veuillez entrer la valeur de R2 : ");
    scanf("%f", &R2);
    printf("Veuillez entrer la valeur de R3 : ");
    scanf("%f", &R3);

    // Calculer et afficher le résultat en fonction du choix de l'utilisateur
    if (choix == 1) {
        resultat_R = R1 + R2 + R3;
        printf("La résistance en série est : %.2f\n", resultat_R);
    } else if (choix == 2) {
        resultat_R = (R1 * R2 * R3) / (R1*R2 + R2*R3 + R1*R3);
        printf("La résistance en parallèle est : %.2f\n", resultat_R);
    } else {
        printf("Choix invalide\n");
    }

    return 0;
}



