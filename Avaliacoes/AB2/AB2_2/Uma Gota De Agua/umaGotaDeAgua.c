#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int coluna;
    scanf("%d", &coluna);

    int matriz[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int linha = 0;

    while (linha < 5)
    {
        if (coluna < 0 || coluna > 4)
        {
            printf("Tenho sede\n");
            return 0;
        }

        int valor = matriz[linha][coluna];

        if (linha == 4)
        {
            if (valor == 3)
            {
                printf("Me molhou!\n");
            }

            else
            {
                printf("AGUA\n");
            }
            
            return 0;
        }


        if (valor == 1)
        {
            coluna++;
        }
        
        else if (valor == 2)
        {
            coluna--;
        }

        linha++;
    }

    printf("Tenho sede\n");

    return 0;
}