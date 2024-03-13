#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta, x1, x2, solution;

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    printf("Entrez la valeur de c : ");
    scanf("%d", &c);


    if (a == 0)
    {
        if (b != 0)
        {
            solution = (-c )/ b;
            printf("la solution de l'equation %dx² + %dx + %d = 0 est : %f", a, b, c, solution);
        }
        else
        {
            if (c == 0)
            {
                printf("toujours vrai");
            }
            else
            {
                printf("impossible");
            }
        }
    }
    else
    {
        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("L'equation %dx² + %dx + %d = 0 a deux solutions x1 : %.2f et x2: %.2f\n",a,b,c ,x1, x2);
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("L'equation %dx² + %dx + %d = 0 admet une solution s: %.2f\n",a,b,c ,x1);
        }
        else
        {
            printf("l'equation n'admet pas de solution réel");
        }
    }

    return 0;
}
