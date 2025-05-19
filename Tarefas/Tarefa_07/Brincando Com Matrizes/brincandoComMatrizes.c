#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int matriz[3][3];
    int soma = 0;
    int maior = 0;
    int somaDiagonal = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];

            if (i == 0 && j == 0)
            {
                maior = matriz[i][j];
            }

            else if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }

            if (i == j)
            {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    float media = soma / 9.0;

    int delta;

    if (maior > 0)
    {
        delta = 1;
    }

    else if (maior < 0)
    {
        delta = -1;
    }

    else
    {
        delta = 0;
    }

    printf("%.2f %d %d %d\n", media, maior, delta, somaDiagonal);

    return 0;
}