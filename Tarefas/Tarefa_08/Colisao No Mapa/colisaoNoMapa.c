#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int mapa[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mapa[i][j]);
        }
    }

    int C;
    scanf("%d", &C);

    char comandos[C + 1];

    for (int i = 0; i < C; i++)
    {
        scanf(" %c", &comandos[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 0; i < C; i++)
    {
        int novoX = x, novoY = y;

        if (comandos[i] == 'C')
            novoX--;

        else if (comandos[i] == 'B')
            novoX++;

        else if (comandos[i] == 'E')
            novoY--;

        else if (comandos[i] == 'D')
            novoY++;

        if (novoX >= 0 && novoX < n && novoY >= 0 && novoY < m && mapa[novoX][novoY] == 1)
        {
            x = novoX;
            y = novoY;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mapa[i][j] == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    printf("(%d,%d)\n", x, y);
    return 0;
}