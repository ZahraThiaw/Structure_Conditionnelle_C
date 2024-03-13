#include <stdio.h>

int main() {
    int annee, mois, jours;

    // Saisie de l'année et du mois
    printf("Entrez l'annee : ");
    scanf("%d", &annee);

if (annee < 1){
    printf("Année invalide \n");
    return 1;
}else {
    printf("Entrez le mois (1-12) : ");
    scanf("%d", &mois);
    // Vérification de la validité du mois
    if (mois < 1 || mois > 12) {
        printf("Mois invalide.\n");
        return 1;
    }else {
        // Détermination du nombre de jours dans le mois
    if (mois == 2) {
        // Vérification si l'année est bissextile
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
            jours = 29;
        else
            jours = 28;
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        jours = 30;
    } else {
        jours = 31;
    }
    }
}
    

    // Affichage du nombre de jours
    printf("Le mois %d de l'annee %d comporte %d jours.\n", mois, annee, jours);

    return 0; // Fin normale du programme
}

