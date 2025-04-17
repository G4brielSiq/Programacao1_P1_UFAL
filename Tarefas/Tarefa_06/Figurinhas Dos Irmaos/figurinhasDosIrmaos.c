#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void preencherArray(int array[], int num, int cont)
{
    if (cont == num)
    {
        return;
    }

    scanf("%d", &array[cont]);

    preencherArray(array, num, cont + 1);
}

int qntFigMaria(int array[], int num, int qntImpar, int cont)
{
    if (cont == num)
    {
        return qntImpar;
    }

    if (array[cont] % 2 != 0)
    {
        qntImpar++;
    }

    return qntFigMaria(array, num, qntImpar, cont + 1);
}

int qntFigJoao(int array[], int num, int qntPar, int cont)
{
    if (cont == num)
    {
        return qntPar;
    }

    if (array[cont] % 2 == 0)
    {
        qntPar++;
    }

    return qntFigJoao(array, num, qntPar, cont + 1);
}

bool valorJaExiste(int array[], int atual, int valor)
{
    if (atual < 0)
    {
        return false;
    }

    if (array[atual] == valor)
    {
        return true;
    }

    return valorJaExiste(array, atual - 1, valor);
}

int somarUnicosPar(int array[], int cont, int soma)
{
    if (cont < 0)
    {
        return soma;
    }

    if (array[cont] % 2 == 0 && !valorJaExiste(array, cont - 1, array[cont]))
    {
        soma += array[cont];
    }

    return somarUnicosPar(array, cont - 1, soma);
}

int somarUnicosImpar(int array[], int cont, int soma)
{
    if (cont < 0)
    {
        return soma;
    }

    if (array[cont] % 2 != 0 && !valorJaExiste(array, cont - 1, array[cont]))
    {
        soma += array[cont];
    }

    return somarUnicosImpar(array, cont - 1, soma);
}

int main()
{
    int num;
    scanf("%d", &num);

    int array[num];

    preencherArray(array, num, 0);

    int qntJoao = qntFigJoao(array, num, 0, 0);
    int qntMaria = qntFigMaria(array, num, 0, 0);

    printf("%d\n", qntJoao);
    printf("%d\n", qntMaria);

    int somaJoao = somarUnicosPar(array, num - 1, 0);
    int somaMaria = somarUnicosImpar(array, num - 1, 0);

    if (somaJoao > somaMaria)
    {
        printf("%d\n", somaJoao);
    }

    else
    {
        printf("%d\n", somaMaria);
    }

    return 0;
}