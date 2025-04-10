#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int excedeu = 0;

void verificarCapacidade(int leituras, int capacidade, int pessoas)
{
    if (leituras == 0)
    {
        return;
    }

    int quantSairam, quantEntraram;
    scanf("%d %d", &quantSairam, &quantEntraram);

    pessoas = pessoas - quantSairam + quantEntraram;

    if (pessoas > capacidade)
    {
        excedeu = 1;
        return;
    }

    verificarCapacidade((leituras - 1), capacidade, pessoas);
}

int main()
{
    int leituras, capacidade;
    scanf("%d %d", &leituras, &capacidade);

    verificarCapacidade(leituras, capacidade, 0);

    if (excedeu)
    {
        printf("S");
    }

    else
    {
        printf("N");
    }

    return 0;
}
