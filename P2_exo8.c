#include <stdio.h>

int main() {
    int A, B, C, minimum, maximum, moyenne;

    // Lecture des trois valeurs entières
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);
    printf("Entrez la valeur de C : ");
    scanf("%d", &C);


    // Trouver le minimum
    minimum = A;
    if (B < minimum) minimum = B;
    if (C < minimum) {
        moyenne = minimum;
        minimum = C;
        }

    // Trouver le maximum
    maximum = A;
    if (B > maximum) maximum = B;
    if (C > maximum) {
        moyenne = maximum;
        maximum = C;
        }

    // Affichage croissant
    printf("Ordre croissant : %d, %d, %d\n", minimum, moyenne, maximum);

    // Affichage décroissant
    printf("Ordre décroissant : %d, %d, %d\n", maximum, moyenne, minimum);


    return 0;
}
