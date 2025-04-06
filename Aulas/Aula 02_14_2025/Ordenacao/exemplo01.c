#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, menor, meio, maior;

    printf("Informe os valores: ");
    scanf("%d%d%d", &a, &b, &c);

    menor = a;

    if (b < menor)
    {
        menor = b;
    }

    if (c < menor)
    {
        menor = c;
    }

    maior = c;

    if (b > maior)
    {
        maior = b;
    }

    if (a > maior)
    {
        maior = a;
    }

    meio = b;

    if (a < b && a > c)
    {
        meio = a;
    }

    if (a < c && a > b)
    {
        meio = a;
    }

    if (c < b && c > a)
    {
        meio = c;
    }

    if (c < a && c > b)
    {
        meio = c;
    }

    printf("\n%d", menor);
    printf("\n%d", meio);
    printf("\n%d", maior);

    return 0;
}