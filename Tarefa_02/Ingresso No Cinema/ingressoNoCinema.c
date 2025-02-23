#include <stdio.h>
#include <stdlib.h>

// O valor normal de um ingresso em um determinado cinema é R$ 20,00. Entretanto, se o cliente é estudante ou idoso, o cinema cobra apenas meia-entrada.

// Faça um programa que leia um valor inteiro (0 ou 1) que indica se o cliente é estudante e outro valor inteiro (0 ou 1) que indica se o cliente é idoso. Com base nos valores lidos, o programa deve indicar, utilizando 0 ou 1, se este cliente paga entrada completa (falso - 0) ou meia-entrada (verdadeiro - 1).

int main()
{
    int estud, idoso;

    scanf("%d%d", &estud, &idoso);

    if(estud == 1 || idoso == 1)
    {
        printf("1");
    }

    else
    {
        printf("0");
    }

    return 0;
}