#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cod1, cod2, cod3, cod4, cod5;

    scanf("%d%d%d%d%d", &cod1, &cod2, &cod3, &cod4, &cod5);

    int ABCDE = (cod1 * (pow(10, 4))) + (cod2 * (pow(10, 3))) +
                (cod3 * (pow(10, 2))) + (cod4 * 10) + cod5;

    if ((cod1 == cod5) && (cod2 == cod4))
    {
        printf("Feldspato, de um esporro no Gabro por mim");
    }

    else
    {
        if (((ABCDE % 2) == 0) && ((ABCDE % 7) != 0))
        {
            printf("Feldspato, va para Gemeo Calido");
        }

        else if (((ABCDE % 7) == 0) && ((ABCDE % 2) != 0))
        {
            printf("Feldspato, va para Gemeo Cinzento");
        }

        else
        {
            if ((ABCDE >= 50000) && (ABCDE <= 99999))
            {
                printf("Feldspato, va para Vale Incerto");
            }

            else if ((ABCDE >= 100) && (ABCDE <= 49999))
            {
                printf("Feldspato, va para Profundezas do Gigante");
            }

            else if ((ABCDE > 0) && (ABCDE < 3))
            {
                printf("Feldspato, va para Abrolho Sombrio");
            }

            else
            {

                printf("Feldspato, foi um erro de leitura");
            }
        }
    }

    return 0;
}