#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int ciclo(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 1 + ciclo(n / 2);
    }

    return 1 + ciclo((3 * n) + 1);
}

int maxCiclo(int atual, int fim, int maxAtual)
{
    if (atual > fim)
    {
        return maxAtual;
    }

    int atualCiclo = ciclo(atual);

    if (atualCiclo > maxAtual)
    {
        maxAtual = atualCiclo;
    }

    return maxCiclo((atual + 1), fim, maxAtual);
}

void lerEntradas()
{
    int i, j;

    if (scanf("%d %d", &i, &j) == 2)
    {
        int menor = i < j ? i : j;

        int maior = i > j ? i : j;

        int resultado = maxCiclo(menor, maior, 0);

        printf("%d %d %d\n", i, j, resultado);

        lerEntradas();
    }
}

int main()
{
    lerEntradas();

    return 0;
}