#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int p, e;

    scanf("%d %d", &p, &e);

    int votos[e][p];

    for (int i = 0; i < e; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &votos[i][j]);
        }
    }

    for (int i = 0; i < p; i++)
    {
        int cont = 0;

        for (int j = 0; j < e; j++)
        {
            if (votos[j][i] == 1)
            {
                cont++;
            }
        }

        printf("Princesa %d: %d voto(s)", i + 1, cont);
        printf("\n");
    }

    return 0;
}