#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void calcularMatrizSoma(int matrizA[3][3], int matrizB[3][3])
{
    int matrizResul[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            matrizResul[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; i++)
        {
            printf("%d", matrizResul[i][j]);
        }

        printf("\n");
    }
}

int calcularMatriz(char operacao, int matrizA[3][3], int matrizB[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    if (operacao == 'Soma')
    {
        calcularMatrizSoma(matrizA, matrizB);
    }

    else if (operacao == 'Sub')
    {
        calcularMatrizSub(matrizA, matrizB);
    }

    else if (operacao == 'Multi')
    {
        calcularMatrizMulti(matrizA, matrizB);
    }

    return 0;
}

void selecionarOperacao(int matrizA[3][3], int matrizB[3][3])
{
    char operacao;
    scanf(" %s", &operacao);

    if (operacao == 'Fim')
    {
        return;
    }

    calcularMatriz(operacao, matrizA, matrizB);

    return selecionarOperacao(matrizA, matrizB);
}

int main()
{
    int matrizA[3][3], matrizB[3][3];

    selecionarOperacao(matrizA, matrizB);

    return 0;
}