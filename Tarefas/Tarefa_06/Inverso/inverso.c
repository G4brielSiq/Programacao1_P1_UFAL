#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void preencherArray(int array[], int num)
{
    if (num > 0)
    {
        scanf("%d", &array[num - 1]);

        return preencherArray(array, num - 1);
    }

    return;
}

void imprimirArray(int array[], int num, int cont)
{
    if (cont == num)
    {
        return;
    }

    printf("%d ", array[cont]);

    return imprimirArray(array, num, cont + 1);
}

int main()
{
    int num;
    scanf("%d", &num);

    int array[num];

    preencherArray(array, num);
    imprimirArray(array, num, 0);

    return 0;
}