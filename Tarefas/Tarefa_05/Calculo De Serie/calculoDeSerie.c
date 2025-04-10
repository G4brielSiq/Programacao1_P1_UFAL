#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double calcularSerie(int num, int pos, int imparAtual, int expPot2, int denParAtual, double soma)
{
    if (pos > num)
    {
        return soma;
    }

    double numerador, denominador;

    if (pos % 2 == 1)
    {
        numerador = imparAtual;
        imparAtual += 2;

        denominador = pow(4, (pos / 2));
    }

    else
    {
        numerador = pow(2, expPot2);
        expPot2 += 2;

        denominador = denParAtual;
        denParAtual += 3;
    }

    soma += numerador / denominador;

    return calcularSerie(num, (pos + 1), imparAtual, expPot2, denParAtual, soma);
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("S: %.2lf\n", calcularSerie(num, 1, 1, 1, 3, 0.0));

    return 0;
}
