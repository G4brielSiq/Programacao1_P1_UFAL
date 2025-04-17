#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void preencherArray(int array[], int cont)
{
    if (cont == 6)
    {
        return;
    }

    scanf("%d", &array[cont]);

    return preencherArray(array, cont + 1);
}

int analisarMenorElemento(int array[], int menor, int cont)
{
    if (cont == 6)
    {
        return menor;
    }

    if (array[cont] <= menor)
    {
        menor = array[cont];
    }

    return analisarMenorElemento(array, menor, cont + 1);
}

int analisarMaiorElemento(int array[], int maior, int cont)
{
    if (cont == 6)
    {
        return maior;
    }

    if (array[cont] >= maior)
    {
        maior = array[cont];
    }

    return analisarMaiorElemento(array, maior, cont + 1);
}

int main()
{
    int array[6];

    preencherArray(array, 0);

    printf("%d\n", analisarMenorElemento(array, array[0], 0));
    printf("%d\n", analisarMaiorElemento(array, 0, 0));

    return 0;
}