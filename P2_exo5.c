#include <stdio.h>

int main()
{
    int jour;

    printf("Entrez un chiffre de 1 à 7 : ");
    scanf("%d", &jour);

    if (jour >= 1 && jour <= 7)
    {
        if (jour == 1)
        {
            printf("Lundi\n");
        }
        else if (jour == 2)
        {
            printf("Mardi\n");
        }
        else if (jour == 3)
        {
            printf("Mercredi\n");
        }
        else if (jour == 4)
        {
            printf("Jeudi\n");
        }
        else if (jour == 5)
        {
            printf("Vendredi\n");
        }
        else if (jour == 6)
        {
            printf("Samedi\n");
        }
        else
        {
            printf("Dimanche\n");
        }
    }
    else
        printf("Veuillez entrer un chiffre entre 1 et 7.\n");

    return 0;
}

// switch (jour) {
//         case 1:
//             printf("Lundi\n");
//             break;
//         case 2:
//             printf("Mardi\n");
//             break;
//         case 3:
//             printf("Mercredi\n");
//             break;
//         case 4:
//             printf("Jeudi\n");
//             break;
//         case 5:
//             printf("Vendredi\n");
//             break;
//         case 6:
//             printf("Samedi\n");
//             break;
//         case 7:
//             printf("Dimanche\n");
//             break;
//         default:
//             // Cas où le chiffre n'est pas entre 1 et 7
//             printf("Veuillez entrer un chiffre entre 1 et 7.\n");
