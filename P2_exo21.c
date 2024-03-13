#include <stdio.h>

int main() {
    int nombre, unite;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    unite = nombre % 10;

    if (unite == 0) {
        printf("Erreur : Le chiffre d'unité est zéro.\n");
    } else {
        if (nombre % unite == 0) {
            printf("%d est divisible par %d.\n", nombre, unite);
        } else {
            printf("%d n'est pas divisible par %d.\n", nombre, unite);
        }
    }

    return 0;
}
