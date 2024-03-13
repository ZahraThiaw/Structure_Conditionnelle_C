#include <stdio.h>

int main() {
    float a, b, x;

    printf("Entrez la valeur de a : ");
    scanf("%f", &a);

    printf("Entrez la valeur de b : ");
    scanf("%f", &b);

    if (a != 0) {
        x = -b / a;

        printf("La solution de l'equation %.2fx + %.2f = 0 est x = %.2f\n", a, b, x);
    } else {
        printf("impossible \n");
    }

    return 0;
}
