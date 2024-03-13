#include <stdio.h>

int main() {
    int a, b;
    char operateur;
    float resultat;

    printf("Donner a: \n");
    scanf("%d", &a);

    printf("Enter un operateur (+, -, *, /): \n");
    scanf(" %c", &operateur);

    printf("donner b: \n");
    scanf("%d", &b);

    if (operateur == '+') {
        resultat = a + b;
    } else if (operateur == '-') {
        resultat = a - b;
    } else if (operateur == '*') {
        resultat = a * b;
    } else if (operateur == '/') {
        if (b != 0) {
            resultat = (float)a / b;
        } else {
            printf("Erreur ! b ne doit pas être nul\n");
            return 1;
        }
    } else {
        printf("Opérateur invalide \n");
        return 1;
    }

    printf("%d %c %d = %f \n",a,operateur,b, resultat);

    return 0;
}
