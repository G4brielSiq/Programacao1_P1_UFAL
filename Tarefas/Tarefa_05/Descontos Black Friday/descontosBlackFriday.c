#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double calcularDescontos(int cont, int promo)
{
    if (cont == 5)
    {
        return promo;
    }

    double preco, descon;
    scanf("%lf %lf", &preco, &descon);

    if (descon <= (preco * 0.80))
    {
        promo++;
    }

    return calcularDescontos((cont + 1), promo);
}

int main()
{
    printf("%d", calcularDescontos(0, 0));

    return 0;
}