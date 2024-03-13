#include <stdio.h>

int main()
{
    int montant, nb20 = 0, nb10 = 0, nb5 = 0, np2 = 0, np1 = 0;

    printf("Entrez le montant en euros : ");
    scanf("%d", &montant);

    if (montant >= 1)
    {
        if (montant >= 20)
        {
            nb20 = montant / 20;
            montant = montant % 20;
        }
        if (montant >= 10)
        {
            nb10 = montant / 10;
            montant = montant % 10;
        }
        if (montant >= 5)
        {
            nb5 = montant / 5;
            montant = montant % 5;
        }
        if (montant >= 2)
        {
            np2 = montant / 2;
            montant = montant % 2;
        }
        if (montant >= 1){
            np1 = montant;
        }
    }
    else {
        printf("Pas de décomposition possible");
    }

    printf("Décomposition en billets et pièces est : \n");
    printf("Billets de 20 euros : %d\n", nb20);
    printf("Billets de 10 euros : %d\n", nb10);
    printf("Billets de 5 euros  : %d\n", nb5);
    printf("Pièces de 2 euros   : %d\n", np2);
    printf("Pièces de 1 euro    : %d\n", np1);

    return 0;
}
