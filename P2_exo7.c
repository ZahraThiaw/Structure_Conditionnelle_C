#include <stdio.h>

int main()
{
    int A, B, min, max;

    // Saisie des deux valeurs
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);

    printf("Entrez la valeur de B : ");
    scanf("%d", &B);


    if  (A < B) {
        min = A;
        max = B;
    }else {
        if (A > B) {
            min = B;
            max = A;
        } else {
            printf("A et B sont egaux \n");
            return 1;
        }
    }

    // Affichage croissant
    printf("Ordre croissant : %d, %d\n", min, max);

    // Affichage décroissant
    printf("Ordre décroissant : %d, %d\n", max, min);

    return 0;
}
