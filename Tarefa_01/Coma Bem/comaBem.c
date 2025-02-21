#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia um valor representando o gasto realizado por um cliente do restaurante COMABEM e imprima o valor total a ser pago, considerando os 10% do garçom.

int main()
{
    double valor;
    double total;

    scanf("%lf", &valor);

    total = valor + (valor / 10);

    printf("%.2lf", total);

    return 0;
}