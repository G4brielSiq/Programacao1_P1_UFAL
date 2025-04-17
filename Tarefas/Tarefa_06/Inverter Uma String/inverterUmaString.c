#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void imprimirArrayInvertido(char array[], int cont)
{
    if (cont < 0)
    {
        return;
    }

    printf("%c", array[cont]);

    return imprimirArrayInvertido(array, cont - 1);
}

int encontrarUltimoindice(char array[], int cont)
{
    if (array[cont] == '\0')
    {
        return cont - 1;
    }

    return encontrarUltimoindice(array, cont + 1);
}

int main()
{
    char array[256];

    scanf("%s", array);

    int ultIndice = encontrarUltimoindice(array, 0);

    imprimirArrayInvertido(array, ultIndice);

    return 0;
}