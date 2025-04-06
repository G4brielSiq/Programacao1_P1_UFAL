#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calcularFatorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    
    return num * calcularFatorial(num - 1);
}

int calcularNumeroPrimo(int cont, int num)
{
    if (num <= 0)
    {
        return 0;
    }

    if (cont * cont > num)
    {
        return 1;
    }

    if (num % cont == 0)
    {
        return 0;
    }

    return calcularNumeroPrimo(cont + 1, num);
}

int encontrarProximoPrimo(int num)
{
    if (calcularNumeroPrimo(2, num))
    {
        return num;
    }

    return encontrarProximoPrimo(num + 1);
}

double calcularCasos(int cont, int num)
{
    if (cont > num)
    {
        return 0.0;
    }

    int fat = calcularFatorial(cont);
    int divisor = encontrarProximoPrimo(cont);

    double termo = (double)fat / divisor;

    printf("%d!/%d", cont, divisor);

    if (cont < num)
    {
        printf(" + ");
    }

    return termo + calcularCasos(cont + 1, num);
}

int main()
{
    int num;
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("0.00\n");

        return 0;
    }

    double soma = calcularCasos(1, num);

    printf("\n%.2lf\n", soma);

    return 0;
}
