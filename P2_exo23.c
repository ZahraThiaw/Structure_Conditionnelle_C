#include <stdio.h>

int main() {
    int jour1, mois1, annee1;
    int jour2, mois2, annee2;

    printf("donner la premiere date (jj mm aaaa): \n");
    scanf("%d %d %d", &jour1, &mois1, &annee1);

   printf("donner la deuxieme date (jj mm aaaa): \n");
    scanf("%d %d %d", &jour2, &mois2, &annee2);


    if (annee1 > annee2 || (annee1 == annee2 && mois1 > mois2) || (annee1 == annee2 && mois1 == mois2 && jour1 > jour2)) {
        printf("%d %d %d  est plus récent.\n",jour1, mois1, annee1);
    } else {
        printf("%d %d %d  est plus récent.\n",jour2, mois2, annee2);
    }

    return 0;
}
