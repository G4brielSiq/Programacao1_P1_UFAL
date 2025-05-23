#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int numero, int i)
{
    if (numero == 0 || numero == 1)
    {
        return 0;
    }

    if (i > numero / 2)
    {
        return 1;
    }

    if (numero % i == 0)
    {
        return 0;
    }

    return ehPrimo(numero, i + 1);
}

void ler1()
{
    int n; 

    scanf("%d", &n);

    if (n != -1)
    {
        printf("%d\n", ehPrimo(n, 2));

        ler1();
    }

}

// forma "enquanto houver número"

void ler2()
{
    int n, deu_certo; 

    deu_certo = scanf("%d", &n);

    if (deu_certo != EOF)
    {
        printf("%d\n", ehPrimo(n, 2));

        ler2();
    }

}

int main()
{
    ler1();

    return 0;
}
