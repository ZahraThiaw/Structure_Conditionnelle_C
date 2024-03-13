#include <stdio.h>

int main()
{
    int jour1, mois1, annee1, jour2, mois2, annee2;

    printf("Veillez entrer en caractére numérique la première date (jour mois année) :");
    scanf("%d %d %d", &jour1, &mois1, &annee1);

    printf("Veillez entrer la deuxième date en caractére numérique (jour mois année) :");
    scanf("%d %d %d", &jour2, &mois2, &annee2);

    if (annee1 > annee2)
    {
        printf("la première date est postérieur à la seconde date. \n");
    }
    else if (annee1 < annee2)
            {
            printf("la première date est antérieur à la seconde date. \n");
            }



            else {
                if (mois1 > mois2)
                    {
                    printf("la première date est postérieur à la seconde date. \n");
                    }
                else if (mois1 < mois2)
                    {
                    printf("la première date est antérieur à la seconde date. \n");
                    } 
                

                else {
                    if (jour1 > jour2)
                     {
                     printf("la première date est postérieur à la seconde date. \n");
                    }
                    else if (jour1 < jour2) 
                    {
                    printf("la première date est antérieur à la seconde date. \n");
                    }    
    
                    }
            }


    return 0;
}
