#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prim, secun;
    double fator;

    scanf("%d%d%lf", &prim, &secun, &fator);

    if (((prim == 1) && (secun == 1)) || ((prim == 3) && (secun == 1)))
    {
        printf("Aumenta mais!");
    }

    else if (((prim == 1) && (secun == 2)) || ((prim == 3) && (secun == 2)))
    {
        printf("Legal");
    }

    else if ((prim == 2) && (secun == 1))
    {
        printf("Essa eh punk");
    }

    else if ((prim == 2) && (secun == 2))
    {
        printf("Hoje eu choro");
    }

    if (fator >= 1 && fator <= 4)
    {
        printf("\n:'(");
    }

    else if (fator > 4 && fator <= 7)
    {
        printf("\n^_^");
    }

    else if (fator > 7 && fator <= 10)
    {
        printf("\n=D");
    }

    return 0;
}