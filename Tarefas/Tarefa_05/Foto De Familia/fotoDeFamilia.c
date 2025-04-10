#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double alocarMenor(int cont, double fotos[])
{
    if (cont < 4)
    {
        if (fotos[0] >= fotos[cont])
        {
            double aux = fotos[0];
            fotos[0] = fotos[cont];
            fotos[cont] = aux;
        }

        return alocarMenor((cont + 1), fotos);
    }

    return 0;
}

double alocarSegundoMenor(int cont, double fotos[])
{
    if (cont < 4)
    {
        if (fotos[3] >= fotos[cont])
        {
            double aux = fotos[3];
            fotos[3] = fotos[cont];
            fotos[cont] = aux;
        }

        return alocarMenor((cont + 1), fotos);
    }

    return 0;
}

double alocarMaior(int cont, double fotos[])
{
    if (cont < 5)
    {
        if (fotos[2] <= fotos[cont])
        {
            double aux = fotos[2];
            fotos[2] = fotos[cont];
            fotos[cont] = aux;
        }
    }

    return 0;
}

int main()
{
    double fotos[4];

    scanf("%lf %lf %lf %lf", &fotos[0], &fotos[1], &fotos[2], &fotos[3]);

    alocarMenor(0, fotos);

    alocarSegundoMenor(1, fotos);

    alocarMaior(1, fotos);

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", fotos[0], fotos[1], fotos[2], fotos[3]);

    return 0;
}