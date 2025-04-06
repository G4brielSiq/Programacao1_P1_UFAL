#include <stdio.h>
#include <stdlib.h>

void bubble(int i, int n, int numeros[])
{
    if (i < (n - 1))
    {
        int aux;

        if (numeros[i] > numeros[(i + 1)])
        {
            aux = numeros[i];
            numeros[i] = numeros[(i + 1)];
            numeros[(i + 1)] = aux;
        }

        bubble((i + 1), n, numeros);
    }
}

int imprimir(int i, int n, int numeros[])
{
    if (i < n)
    {
        printf("%d", numeros[i]);
    }

    return imprimir((i + 1), n, numeros);
}

int main()
{
    int numeros[] = {4, 1, 2, 5, 8, 6, 7};

    bubble(0, 7, numeros);

    imprimir(0, 7, numeros);

    return 0;
}