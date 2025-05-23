#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);

    int tabuleiro[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tabuleiro[i]);
    }

    int posicoes[m];

    for (int i = 0; i < m; i++)
    {
        posicoes[i] = 0;
    }

    int totalJogadas = m * o;

    for (int i = 0; i < totalJogadas; i++)
    {
        int jogador = i % m;
        int dado;

        scanf("%d", &dado);

        posicoes[jogador] = (posicoes[jogador] + dado) % n;

        posicoes[jogador] = (posicoes[jogador] + tabuleiro[posicoes[jogador]]) % n;

        if (posicoes[jogador] < 0)
        {
            posicoes[jogador] += n;
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d \n", tabuleiro[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", posicoes[i]);
    }

    return 0;
}