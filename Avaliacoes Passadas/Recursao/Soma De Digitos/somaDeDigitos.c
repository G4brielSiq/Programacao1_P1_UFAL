#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcularSoma(int num)
{
    if (num == 0)
    {
        return 0;
    }
    
    return (num % 10) + calcularSoma(num / 10);
}

int calcularFatorial(int num)
{
    if (num > 12)
    {
        return calcularFatorial(12);
    }

    if (num <= 1)
    {
        return 1;
    }

    return num * calcularFatorial(num - 1);
}

int ehPrimo(int num, int divisor)
{
    if (num < 2)
    {
        return 0;
    }

    if (divisor * divisor > num)
    {
        return 1;
    }

    if (num % divisor == 0)
    {
        return 0;
    }

    return ehPrimo(num, (divisor + 1));
}

int proximoPrimo(int num)
{
    if (ehPrimo(num + 1, 2))
    {
        return num + 1;
    }

    return proximoPrimo(num + 1);
}

void processarEntradas(int numEntradas, int cont, int maiorSoma, int menorSoma)
{
    if (cont == numEntradas)
    {
        int fatMenorSoma = calcularFatorial(menorSoma);

        int primoAposMenorSoma = proximoPrimo(menorSoma);

        double Y = (double)(fatMenorSoma + primoAposMenorSoma) / maiorSoma;

        printf("\nMaior soma: %d\n", maiorSoma);
        printf("Menor soma: %d\n", menorSoma);
        printf("Valor Y: %.2lf\n", Y);

        return;
    }

    int num;

    scanf("%d", &num);

    int soma = calcularSoma(num);

    printf("N: %d - Soma: %d\n", num, soma);

    if (cont == 0 || soma > maiorSoma)
    {
        maiorSoma = soma;
    }

    if (cont == 0 || soma < menorSoma)
    {
        menorSoma = soma;
    }

    processarEntradas(numEntradas, cont + 1, maiorSoma, menorSoma);
}

int main()
{
    int numEntradas;

    scanf("%d", &numEntradas);

    printf("\n");
    processarEntradas(numEntradas, 0, 0, 1000);

    return 0;
}
