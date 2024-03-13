#include <stdio.h>

//	Si l'année est divisible par 4 et n'est pas divisible par 100, ou si l'année est divisible par 400.

int main() {
    int annee;

    printf("Veuillez saisir une année : ");
    scanf("%d", &annee);

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        printf("%d est une année bissextile.\n", annee);
    } else {
        printf("%d n'est pas une année bissextile.\n", annee);
    }

    return 0;
}
