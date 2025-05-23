#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define TAM 3

int matrizValida(int matriz[TAM][TAM])
{
    bool principal = true, secundaria = true;

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                principal = false;
            }

            else if (i + j == TAM - 1 && matriz[i][j] != 1)
            {
                secundaria = false;
            }

            else if (i != j && i + j != TAM - 1 && matriz[i][j] != 0)
            {
                principal = false;
                secundaria = false;
            }
        }
    }

    return (principal || secundaria);
}

int matrizesIguais(int a[TAM][TAM], int b[TAM][TAM])
{
    for (int i = 0; i < TAM; i++)

        for (int j = 0; j < TAM; j++)

            if (a[i][j] != b[i][j])

                return 0;
    return 1;
}

void lerMatriz(int matriz[TAM][TAM])
{
    for (int i = 0; i < TAM; i++)

        for (int j = 0; j < TAM; j++)

            scanf("%d", &matriz[i][j]);
}

int main()
{
    int vidaLuke, vidaVader;
    scanf("%d %d", &vidaLuke, &vidaVader);

    int matrizLuke[TAM][TAM], matrizVader[TAM][TAM];

    while (scanf("%d", &matrizLuke[0][0]) == 1)
    {
        for (int j = 1; j < TAM; j++)

            scanf("%d", &matrizLuke[0][j]);

        for (int i = 1; i < TAM; i++)

            for (int j = 0; j < TAM; j++)

                scanf("%d", &matrizLuke[i][j]);

        for (int i = 0; i < TAM; i++)

            for (int j = 0; j < TAM; j++)

                scanf("%d", &matrizVader[i][j]);

        int validoLuke = matrizValida(matrizLuke);
        int validoVader = matrizValida(matrizVader);

        if (validoLuke && !validoVader)
        {
            vidaVader -= 15;
        }

        else if (!validoLuke && validoVader)
        {
            vidaLuke -= 15;
        }

        else if (validoLuke && validoVader)
        {
            if (matrizesIguais(matrizLuke, matrizVader))
            {
                vidaLuke -= 15;
                vidaVader -= 15;
            }
        }
    }

    if (vidaLuke > vidaVader)
        printf("Luke Skywalker venceu.\n");

    else if (vidaVader > vidaLuke)
        printf("Darth Vader venceu.\n");

    else
        printf("Houve empate.\n");

    return 0;
}