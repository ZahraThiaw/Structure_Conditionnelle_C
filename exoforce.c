/*Ecrire un algorithme qui permet de saisir un horaire(hh:mm:ss) et indique l’heure qu’il fera aprés une seconde*/

#include <stdio.h> 

int main () {

    int h, m, s; 
    
    printf ("Saisir un horaire (hh:mm:ss): \n");
    scanf("%d:%d:%d", &h ,&m ,&s);
    if (h<0 || h>23 || m<0 || m>59 || s<0 || s>59) {
        printf("Horaire invalide");
        return 1;
    }

    s =  s +1;
    if (s==60){
        s = 0;
        m++;
    }
    if (m==60){
        m = 0;
        h = h+ 1;
    }
    if (h == 24) {
        h = 0;
    }

    if (h <=12 ){
        h = h ;
        printf ("L'heure est : %d:%d:%d AM \n", h ,m ,s);
        return 1;
    }
    if (h > 12){
        h = h - 12;
        printf ("L'heure est : %d:%d:%d PM \n", h ,m ,s);
        return 1;
    }

    return 0;
}