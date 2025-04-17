#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void explorarToca(int buracos[], bool visitado[], int buracoAtual)
{
    visitado[buracoAtual] = true;

    if (!visitado[buracos[buracoAtual]])
    {
        explorarToca(buracos, visitado, buracos[buracoAtual]);
    }
}

void contarTocas(int buracos[], bool visitado[], int N, int index, int *totalTocas)
{

    if (index == N)
        return;

    if (!visitado[index])
    {
        explorarToca(buracos, visitado, index);
        (*totalTocas)++;
    }

    contarTocas(buracos, visitado, N, index + 1, totalTocas);
}

void lerBuracos(int buracos[], int N, int index)
{
    if (index == N)
        return;

    scanf("%d", &buracos[index]);

    lerBuracos(buracos, N, index + 1);
}

void inicializarVisitados(bool visitado[], int N, int index)
{
    if (index == N)
        return;

    visitado[index] = false;

    inicializarVisitados(visitado, N, index + 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    int buracos[N];
    bool visitado[N];

    lerBuracos(buracos, N, 0);

    inicializarVisitados(visitado, N, 0);

    int totalTocas = 0;

    contarTocas(buracos, visitado, N, 0, &totalTocas);

    printf("%d\n", totalTocas);

    return 0;
}
