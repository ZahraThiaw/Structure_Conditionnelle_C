#include <stdio.h>

int main() {
    int jour, mois, annee, N;
    
    
    printf("Entrez le jour, le mois et l'année  jj mm aaaa : ");
    scanf("%d %d %d", &jour, &mois, &annee);
   
    printf("Entrez la valeur de N  : ");
    scanf("%d", &N);

    int nbrAnnee = N / 365;
    int nbrMois = (N % 365) / 30;
    int nbrJour = (N % 365) % 30;

    

    if (jour < 1) {
        mois--;
        if (mois < 1) {
            mois = 12;
            annee--;
        }
        if (mois == 2) {
            if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                jour -= nbrJour;
                mois -= (N % 365)/ 29;
                annee -= nbrAnnee;
                jour += 29;

                mois -= (N % 365)/ 29;
                if (mois < 1) {
                    mois = 12 - mois;
                    annee--;
                }
                annee -= nbrAnnee;
                
            } else {
                jour -= nbrJour;
                mois -= (N % 365)/ 28;
                annee -= nbrAnnee;
                jour += 28;

                mois -= (N % 365)/ 28;
                if (mois < 1) {
                    mois = 12 - mois;
                    annee--;
                }
                annee -= nbrAnnee;

            }
        } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
            jour -= nbrJour;
            mois -= (N % 365)/ 30;
            annee -= nbrAnnee;
            jour += 30;

            mois -= (N % 365)/ 30;
            if (mois < 1) {
                mois = 12 - mois;
                annee--;
            }
            annee -= nbrAnnee;

        } else {
            jour -= nbrJour;
            mois -= (N % 365)/ 31;
            annee -= nbrAnnee;
            jour += 31;

            mois -= (N % 365)/ 31;
            if (mois < 1) {
            mois = 12 - mois;
            annee--;
            }
            annee -= nbrAnnee;
            }
    }

    printf("Il y a %d jours, la date était : %d/%d/%d\n", N, jour, mois, annee);
    
    return 0;
}