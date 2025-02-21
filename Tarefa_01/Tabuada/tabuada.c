#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia um número inteiro e imprima a tabuada de multiplicação deste número. Suponha que o número lido da entrada é maior que zero.

int tab(int y, int x)
{
    if (x < 10)
    {
        int mult = y * x;

        printf("\n%d x %d = %d", y, x, mult);
        tab(y, (x + 1));
    }
}

int main()
{
    int num;

    scanf("%d", &num);

    tab(num, 1);

    return 0;
}