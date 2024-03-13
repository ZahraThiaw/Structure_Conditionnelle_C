#include <stdio.h>

int main() {
    int A, B, C, D;

    // Lecture des valeurs entières A, B, C et D
    printf("Entrez quatre valeurs entières : ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Tri des valeurs dans l'ordre croissant
    if (A > B) { int temp = A; A = B; B = temp; }
    if (A > C) { int temp = A; A = C; C = temp; }
    if (A > D) { int temp = A; A = D; D = temp; }
    if (B > C) { int temp = B; B = C; C = temp; }
    if (B > D) { int temp = B; B = D; D = temp; }
    if (C > D) { int temp = C; C = D; D = temp; }

    // Affichage des valeurs dans l'ordre croissant
    printf("Valeurs en ordre croissant : %d %d %d %d\n", A, B, C, D);

 
    // Affichage des valeurs dans l'ordre décroissant
    printf("Valeurs en ordre décroissant : %d %d %d %d\n", D, C, B, A);

    return 0;
}
