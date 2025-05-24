#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matriz[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int A;

    scanf("%d", &A);

    for (int i = 0; i < A; i++)
    {
        int x, y, D;

        scanf("%d %d %d", &x, &y, &D);

        for (int dx = -1; dx <= 1; dx++)
        {
            for (int dy = -1; dy <= 1; dy++)
            {
                int i = x + dx;
                int j = y + dy;

                if (i >= 0 && i < N && j >= 0 && j < M)
                {
                    int dano = (dx == 0 && dy == 0) ? D : D / 2;

                    matriz[i][j] -= dano;

                    if (matriz[i][j] < 0)
                    {
                        matriz[i][j] = 0;
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d", matriz[i][j]);

            if (j != M - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    double soma1 = 0, soma2 = 0;
    int tamDiag = (N < M) ? N : M;

    for (int i = 0; i < tamDiag; i++)
    {
        soma1 += matriz[i][i];
        soma2 += matriz[i][M - 1 - i];
    }

    printf("%.2lf\n%.2lf\n", soma1 / tamDiag, soma2 / tamDiag);

    return 0;
}