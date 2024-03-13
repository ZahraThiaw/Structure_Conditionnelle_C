#include <stdio.h>

int main()
{
    int totalSeconde,heure,minute,seconde;
    printf("veuillez saisir le nombre de seconde a convertir : \n");
    scanf("%d", &totalSeconde);
    heure = totalSeconde/3600;
    minute = (totalSeconde%3600) / 60;
    seconde = ((totalSeconde%3600 )%60) ;

    printf("%d secondes = %d heure %d minutes %d secondes \n",totalSeconde,heure,minute,seconde);
}
