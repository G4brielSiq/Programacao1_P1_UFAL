#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double calcularAcessorios(int cont)
{
    if(cont == 3)
    {
        return 0;
    }

    double quant, valor;
    scanf("%lf %lf", &quant, &valor);

    return (quant * valor) + calcularAcessorios(cont + 1);
}

int main()
{
    int arvore;
    scanf("%d", &arvore);

    double precoTotal = calcularAcessorios(0);

    printf("%.2lf\n", (arvore + precoTotal));
    printf("%.2lf", ((arvore + precoTotal) / 21));


    return 0;
}