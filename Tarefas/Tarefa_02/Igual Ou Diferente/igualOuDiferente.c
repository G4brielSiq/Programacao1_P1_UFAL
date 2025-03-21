#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:

// 1 (Se todos os números são iguais)
// 2 (Se todos os números são diferentes)
// 3 (Se apenas dois números são iguais)

int main()
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    if (x == y && x == z && y == z)
    {
        printf("1");
    }

    else if (x != y && x != z && y != z)
    {
        printf("2");
    }

    else
    {
        printf("3");
    }

    return 0;
}