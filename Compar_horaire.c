#include <stdio.h> 

int main () {

    int h1,m1,s1,h2,m2,s2;
    char signe;
    
    printf ("Saisir le premier horaire (hh:mm:ss): \n");
    scanf("%d:%d:%d", &h1 ,&m1 ,&s1);
    printf ("Saisir le second horaire (hh:mm:ss): \n");
    scanf("%d:%d:%d", &h2 ,&m2 ,&s2);


    if (h1<0 || h1>23 || m1<0 || m1>59 || s1<0 || s1>59 || h2<0 || h2>23 || m2<0 || m2>59 || s2<0 || s2>59) {
        printf("Horaire invalide");
        return 1;
    }

    if (h1 < h2){
        signe = '<';

    } else if (h1= h2){
        if(m1 < m2){
            signe = '<';
        }
        else if (m1> m2){
            signe = '>';
        }
        else{
            if(s1< s2){
                signe = '<';
            }
            else if(s1 > s2){
                signe = '>';
            }
            else{
                signe = '=';
                return 1;
            }
    }
    } else {
        signe = '>';
    }

    printf ("l'heure %d:%d:%d %c %d:%d:%d \n", h1,m1,s1,signe, h2,m2,s2);
    return 0;
}