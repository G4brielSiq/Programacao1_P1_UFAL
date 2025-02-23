#include <stdio.h>
#include <stdlib.h>

// Implemente um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina e D-Diesel), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50, o preço do litro do álcool é R$ 1,90 e o preço do litro de Diesel é R$ 1,66.

int main()
{
    double litros;
    char cod;

    scanf("%lf %c", &litros, &cod);

    double precoA = 1.90;
    double precoG = 2.50;
    double precoD = 1.66;

    if (cod == 'A')
    {
        if (litros <= 20)
        {
            precoA = (precoA - (precoA * 0.03)) * litros;
            printf("R$ %.2lf", precoA);
        }

        else
        {
            precoA = (precoA - (precoA * 0.05)) * litros;
            printf("R$ %.2lf", precoA);
        }
    }

    else if (cod == 'G')
    {
        if (litros <= 20)
        {
            precoG = (precoG - (precoG * 0.04)) * litros;
            printf("R$ %.2lf", precoG);
        }

        else
        {
            precoG = (precoG - (precoG * 0.06)) * litros;
            printf("R$ %.2lf", precoG);
        }
    }

    else if (cod == 'D')
    {
        if (litros > 25)
        {
            precoD = (precoD - (precoD * 0.04)) * litros;
            printf("R$ %.2lf", precoD);
        }

        else
        {
            precoD = precoD  * litros;
            printf("R$ %.2lf", precoD);
        }
    }

    return 0;
}