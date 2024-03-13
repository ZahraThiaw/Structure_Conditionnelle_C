#include <stdio.h>

int main() {
    int jour, mois, annee;

    // Saisie de la date
    printf("Entrez la date (jour/mois/annee) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    // Vérification de la validité de la date
    if (annee < 1){
        printf("La date n'est pas valide. \n");
        return 1;
    } else {
            if ((mois >= 1 && mois <= 12) && (jour >= 1)) {
            int joursDansMois = 31;

            // Vérification des mois avec moins de 31 jours
            if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
                joursDansMois = 30;
            } else if (mois == 2) {
                // Février a 28 ou 29 jours selon si l'année est bissextile
                if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                    joursDansMois = 29;
                } else {
                    joursDansMois = 28;
                }
            }

            // Vérification du jour
            if (jour <= joursDansMois) {
                printf("La date est valide.\n");
            } else {
                printf("La date n'est pas valide.\n");
            }
        } else {
            printf("La date n'est pas valide.\n");
        }
    }
    
    return 0;
}
