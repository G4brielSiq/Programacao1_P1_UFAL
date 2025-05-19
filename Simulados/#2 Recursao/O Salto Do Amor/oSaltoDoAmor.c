#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehFibonacci(int num, int a, int b)
{
    if (num == a || num == b)
    {
        return 1;
    }

    if (b > num)
    {
        return 0;
    }

    return ehFibonacci(num, b, a + b);
}

int ehPrimo(int num, int divisor)
{
    if (num < 2)
    {
        return 0;
    }

    if (divisor * divisor > num)
    {
        return 1;
    }

    if (num % divisor == 0)
    {
        return 0;
    }

    return ehPrimo(num, divisor + 1);
}

int somaDosDigitos(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + somaDosDigitos(num / 10);
}

int somaDosDigitosEhPar(int num)
{
    return somaDosDigitos(num) % 2 == 0;
}

void atravessarRio(int sapato, int x, int cont)
{
    if (cont == x)
    {
        printf("Muack!\n");

        return;
    }

    int tronco;
    scanf("%d", &tronco);

    int valido = 0;

    if (sapato == 1)
    {
        valido = ehFibonacci(tronco, 0, 1);
    }

    else if (sapato == 2)
    {
        valido = ehPrimo(tronco, 2);
    }

    else if (sapato == 3)
    {
        valido = somaDosDigitosEhPar(tronco);
    }

    else
    {
        printf("Nhac!\n");

        return;
    }

    if (!valido)
    {
        printf("Nhac!\n");

        return;
    }

    atravessarRio(sapato, x, cont + 1);
}

int main()
{
    int sapato, troncos;

    scanf("%d %d", &sapato, &troncos);

    if (sapato < 1 || sapato > 3)
    {
        printf("Nhac!\n");

        return 0;
    }

    atravessarRio(sapato, troncos, 0);

    return 0;
}
