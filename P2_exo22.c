#include <stdio.h>

int main() {
    int mois;

    printf("donner un mois en (1 - 12): \n");
    scanf("%d", &mois);
    if (mois <1 || mois >12){
     printf("mois invalide \n");

    }else{

    if (mois == 12 || mois == 1 || mois == 2)
        printf("Saison Hiver\n");
    else if (mois >= 3 && mois <= 5)
        printf("Saison Printemps\n");
    else if (mois >= 6 && mois <= 8)
        printf("Saison été\n");
    else if (mois >= 9 && mois <= 11)
        printf("Saison Automne\n");
       }
    return 0;
}
