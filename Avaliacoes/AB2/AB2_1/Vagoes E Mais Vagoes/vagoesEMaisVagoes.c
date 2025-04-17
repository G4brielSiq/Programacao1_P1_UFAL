#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void preencherVagoes(int vagoes[], int total, int cont)
{
    if (cont == total)
    {
        return;
    }

    scanf("%d", &vagoes[cont]);

    preencherVagoes(vagoes, total, (cont + 1));
}

void imprimirVagoes(int vagoes[], int total, int cont)
{
    if (cont == total)
    {
        printf("\n");
        return;
    }

    printf("%d ", vagoes[cont]);

    imprimirVagoes(vagoes, total, (cont + 1));
}

int alocarPassageiros(int vagoes[], int cont, int passageirosRestantes)
{
    if ((cont < 0) || (passageirosRestantes == 0))
    {
        return passageirosRestantes;
    }

    int capacidade = 4 - vagoes[cont];
    int entrando = (passageirosRestantes < capacidade) ? passageirosRestantes : capacidade;
    vagoes[cont] += entrando;
    passageirosRestantes -= entrando;

    return alocarPassageiros(vagoes, (cont - 1), passageirosRestantes);
}

int main()
{
    int num;
    scanf("%d", &num);

    int vagoes[num];
    preencherVagoes(vagoes, num, 0);

    int passageirosRestanes;
    scanf("%d", &passageirosRestanes);

    if (alocarPassageiros(vagoes, (num - 1), passageirosRestanes) <= 0)
    {
        printf("Todos foram acomodados\n");
    }

    else
    {
        printf("%d ficaram de fora.\n", alocarPassageiros(vagoes, (num - 1), passageirosRestanes));
    }

    imprimirVagoes(vagoes, num, 0);

    return 0;
}