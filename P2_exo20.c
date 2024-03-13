
#include <stdio.h>

int main() {
    char sexe;
    float taille, poids, poidsIdeal, bmi;

    printf("Entrez le sexe (M/F) : ");
    scanf(" %c", &sexe);

   
    printf("Entrez la taille en cm : ");
    scanf("%f", &taille);

      printf("Entrez le poids en kg : ");
    scanf("%f", &poids);

      if (sexe == 'M' || sexe == 'm') {
        poidsIdeal = (taille - 100) - (taille - 150) / 4;
    } else if (sexe == 'F' || sexe == 'f') {
        poidsIdeal = (taille - 100) - (taille - 120) / 4;
    } else {
        printf("Sexe non valide.\n");
  
    }

  
    bmi = poids / ((taille / 100) * (taille / 100));

     printf("Poids idéal : %.2f kg\n", poidsIdeal);
    printf("BMI : %.2f\n", bmi);

    if (bmi <= 27) {
        printf("Catégorie : Normale\n");
    } else if (bmi < 32) {
        printf("Catégorie : Obèse\n");
    } else {
        printf("Catégorie : Malade\n");
    }

    return 0;
}



