#include <stdio.h>
#include <stdlib.h>

// Sua missão é escrever um programa para classificar um triângulo de lados de comprimentos dados em: escaleno (os três lados de comprimentos diferentes), isósceles (dois lados de comprimentos iguais) ou equilátero (os três lados de comprimentos iguais).

int main()
{
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == b && a == c && b == c)
    {
        printf("equilatero");
    }

    else if (a != b && a != c && b != c)
    {
        printf("escaleno");
    }

    else
    {
        printf("isosceles");
    }

    return 0;
}