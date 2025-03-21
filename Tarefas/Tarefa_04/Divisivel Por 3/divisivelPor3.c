#include <stdio.h>
#include <stdlib.h>

int calcularNumeroDeDivisoresDivisiveis(int n, int divisor, int cont)
{
    if ((n % divisor) == 0)
    {
        if ((divisor % 3) == 0)
        {
            cont = cont + 1;
        }
    }

    if (divisor > n)
    {
        if (cont != 0)
        {
            return printf("%d", cont);
        }

        else
        {
            return printf("O numero nao possui divisores multiplos de 3!");
        }
    }

    return calcularNumeroDeDivisoresDivisiveis(n, (divisor + 1), cont);
}

int main()
{
    int n;

    scanf("%d", &n);

    calcularNumeroDeDivisoresDivisiveis(n, 1, 0);

    return 0;
}