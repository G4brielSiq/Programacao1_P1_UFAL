#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que determine qual é o valor mensal da parcela do empréstimo que um banco pode autorizar. Para isso, o programa precisa do valor do salário e de quanto a renda mensal já está comprometida com outros empréstimos. Considere que o limite de comprometimento do salário é de 30%. O programa deve calcular e mostrar na tela qual o limite disponível da parcela mensal do novo empréstimo.  Fique atento porque a renda mensal comprometida já pode exceder os 30% e neste caso o limite disponível da parcela mensal será zero.

int main()
{

    double sal, rend;

    scanf("%lf%lf", &sal, &rend);

    double lim = (sal / 100) * 30;
    double parc = lim - rend;

    if (rend >= lim)
    {
        printf("0.00");
    }

    else
    {
        printf("%.2lf", parc);
    }

    return 0;
}