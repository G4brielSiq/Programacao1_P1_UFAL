#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double ajustarPercentual(int dificuldade)
{
    switch (dificuldade)
    {
    case 0:
        return 0.25;
    case 1:
        return 0.20;
    case 2:
        return 0.18;
    case 3:
        return 0.15;
    case 4:
        return 0.12;
    case 5:
        return 0.10;
    default:
        return 0.0;
    }
}

double calcularPreco(int dificuldade, double preco, int ano)
{
    if (ano == 3)
    {
        return preco;
    }

    if (preco <= 45.0)
    {
        return preco;
    }

    double percentual = ajustarPercentual(dificuldade);

    if (preco <= 100.0)
    {
        percentual = percentual / 2;
    }

    double novoPreco = preco * (1 - percentual);

    if (novoPreco < 45.0)
    {
        novoPreco = 45.0;
    }

    return calcularPreco(dificuldade, novoPreco, (ano + 1));
}

void calcularJogos(int total, int atual)
{
    if (atual == total)
    {
        return;
    }

    int dificuldade;
    double preco;
    scanf("%d %lf", &dificuldade, &preco);

    printf("Jogo[%d] = R$%.2lf\n", atual, calcularPreco(dificuldade, preco, 0));

    calcularJogos(total, (atual + 1));
}

int main()
{
    int num;
    scanf("%d", &num);

    calcularJogos(num, 0);

    return 0;
}