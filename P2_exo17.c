#include <stdio.h>

int main(int )
{
    int TN, Q, prix;

    printf("Veillez entrer votre tarif actuelle :\n");
    scanf("%d", &TN);

    printf("Veillez choisir votre statut actuelle :\n 1 : Vous etes un ancien abonnée.\n 2 : Vous etes un nouvel abonnée.\n 3 : Vous etes un étudiant.\n 4 : Vous etes un étranger.  ");
    scanf("%d", &Q);

    switch (Q)
    {
    case 1:
        prix = TN - (TN * 0.15); 
        printf("Bravo, vous avez une remise de 15%%\n Le prix d'abonnement est maintenant : %d\n", prix);
        break; 
        
        case 2:
        prix = TN ; 
        printf("Bienvenue, votre tarif d'abonnement est : %d\n", prix);
        break;

        case 3:
        prix = TN - (TN * 0.20); 
        printf("Bravo, vous avez une remise de 20%%\n Le prix d'abonnement est maintenant : %d\n", prix);
        break; 

        case 4:
        prix = TN - (TN * 0.25); 
        printf("Bravo, vous avez une remise de 25%%\n Le prix d'abonnement est maintenant : %d cfa\n", prix);
        break; 

    default:
        printf("Choix invalide");
    }
    return 0;
}
