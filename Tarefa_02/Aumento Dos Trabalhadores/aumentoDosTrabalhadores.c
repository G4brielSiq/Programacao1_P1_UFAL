#include <stdio.h>
#include <stdlib.h>

// Aqueles com salário superior a R$ 500, terão aumento de 10%, enquanto os que ganham mais de R$ 300 terão aumento de 7%. Os demais funcionários terão aumento de apenas 5%. Escreva um programa que receba como entrada o salário atual de um funcionário, calcule e exiba o valor de seu novo salário já com o aumento concedido.

int main()
{
    double sal;

    scanf("%lf", &sal);

    if (sal > 500)
    {
        sal = sal + (sal / 10);

        printf("%.2lf", sal);
    }

    else if (sal <= 500 && sal > 300)
    {
        sal = sal + ((sal / 100) * 7);

        printf("%.2lf", sal);
    }

    else
    {
        sal = sal + ((sal / 100) * 5);

        printf("%.2lf", sal);
    }

    return 0;
}