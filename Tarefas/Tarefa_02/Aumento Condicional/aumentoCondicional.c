#include <stdio.h>
#include <stdlib.h>

// Faça um programa que recebe o salário de um colaborador e calcule o reajuste segundo o seguinte critério, tendo como base o salário atual:

// a) salários até R$ 280,00 (incluindo) : aumento de 20%
// b) salários entre R$ 280,00 e R$ 700,00 (não incluso)  : aumento de 15%
// c) salários entre R$ 700,00 e R$ 1500,00 (não incluso): aumento de 10%
// d) salários de R$ 1500,00 em diante : aumento de 5%

// Após o aumento ser realizado, informe na tela:
// o salário antes do reajuste;
// o percentual de aumento aplicado;
// o valor do aumento;
// o novo salário, após o aumento.

int main()
{
    double sal;

    scanf("%lf", &sal);

    if (sal <= 280.00)
    {
        printf("%.2lf", sal);
        printf("\n20");
        printf("\n%.2lf", (sal * 0.20));

        sal = sal + (sal * 0.20);
        printf("\n%.2lf", sal);
    }

    else if (sal > 280.00 && sal < 700.00)
    {
        printf("%.2lf", sal);
        printf("\n15");
        printf("\n%.2lf", (sal * 0.15));

        sal = sal + (sal * 0.15);
        printf("\n%.2lf", sal);
    }

    else if (sal >= 700.00 && sal < 1500.00)
    {
        printf("%.2lf", sal);
        printf("\n10");
        printf("\n%.2lf", (sal * 0.10));

        sal = sal + (sal * 0.10);
        printf("\n%.2lf", sal);
    }

    else if (sal >= 1500.00)
    {
        printf("%.2lf", sal);
        printf("\n5");
        printf("\n%.2lf", (sal * 0.05));

        sal = sal + (sal * 0.05);
        printf("\n%.2lf", sal);
    }

    return 0;
}