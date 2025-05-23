#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int matriz[3][3];
    int somaForaDiagonal = 0;
    int menor = 0;
    int positivos = 0;
    double somaPositivos = 0.0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 0)
            {
                somaPositivos += matriz[i][j];
                positivos++;
            }

            if (i == 0 && j == 0)
            {
                menor = matriz[i][j];
            }
            
            else if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }

            if (i != j)
            {
                somaForaDiagonal += matriz[i][j];
            }
        }
    }

    double media = positivos > 0 ? somaPositivos / positivos : 0.0;

    int delta = (menor % 2 == 0) ? 1 : 0;

    printf("%.2lf %d %d %d\n", media, menor, delta, somaForaDiagonal);

    return 0;
}