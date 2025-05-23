#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define MAX_APOSTAS 100
#define MAX_NUMEROS 10
#define MAX_LINHA 100

int main()
{
    int num;
    scanf("%d", &num);
    getchar();

    int ganhadores = 0;
    int resultado[6];

    int apostas[MAX_APOSTAS][MAX_NUMEROS];
    int quant_numeros[MAX_APOSTAS];

    char linha[MAX_LINHA];

    for (int i = 0; i < num; i++)
    {
        fgets(linha, MAX_LINHA, stdin);

        linha[strcspn(linha, "\n")] = '\0';

        int j = 0;
        char *token = strtok(linha, ",");
        while (token != NULL)
        {
            apostas[i][j++] = atoi(token);
            token = strtok(NULL, ",");
        }

        quant_numeros[i] = j;
    }

    fgets(linha, MAX_LINHA, stdin);

    linha[strcspn(linha, "\n")] = '\0';

    char *token = strtok(linha, " ");

    for (int i = 0; i < 6; i++)
    {
        resultado[i] = atoi(token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < num; i++)
    {
        int acertos = 0;

        for (int j = 0; j < quant_numeros[i]; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                if (apostas[i][j] == resultado[k])
                {
                    acertos++;
                    break;
                }
            }
        }

        if (acertos == 6)
        {
            ganhadores++;
        }
    }

    printf("Total de ganhadores: %d\n", ganhadores);

    return 0;
}