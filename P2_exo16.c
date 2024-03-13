#include <stdio.h>

int main() {
    int jour, mois, annee, N;
    
    // Saisie de la date et du nombre de jours N
    printf("Entrez la date (jour mois annee) : ");
    scanf("%d %d %d", &jour, &mois, &annee);
    
    printf("Entrez le nombre de jours N (positif) : ");
    scanf("%d", &N);
    
    // Calcul de la nouvelle date en reculant de N jours
    // if (jour > N) {
    //     jour -= N;
    // } else {
    //     mois--;
    //     if (mois == 0) {
    //         mois = 12;
    //         annee--;
    //     }
    //     int joursDansMoisPrecedent = 31;
    //     if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
    //         joursDansMoisPrecedent = 30;
    //     } else if (mois == 2) {
    //         if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
    //             joursDansMoisPrecedent = 29;
    //         } else {
    //             joursDansMoisPrecedent = 28;
    //         }
    //     }
    //     jour = joursDansMoisPrecedent - (N - jour);
    // }

    if (jour > N) {
        jour -= N;
    } else {
        N -= jour;
        mois--;
        if (mois == 0) {
            mois = 12;
            annee--;
        }
        if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12) {
            jour = 31 - N;
        } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
            jour = 30 - N;
        } else {
            if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                jour = 29 - N;
            } else {return 1;
                jour = 28 - N;
            }
        }
        return 1;
    }
    
    // Affichage de la nouvelle date
    printf("La date il y a %d jours était : %d %d %d \n", N, jour, mois, annee);
    
    return 0;
}
