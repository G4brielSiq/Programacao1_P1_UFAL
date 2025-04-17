#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void preencherArray(int array[], int cont)
{
    if (cont == 10)
    {
        return;
    }

    scanf("%d", &array[cont]);

    return preencherArray(array, cont + 1);
}

int analisarArray(int num, int array[], int qnt, int cont)
{
    if (cont == 10)
    {
        return qnt;
    }

    if (array[cont] == num)
    {
        qnt++;
    }

    return analisarArray(num, array, qnt, cont + 1);
}

int main()
{
    int array[10];

    preencherArray(array, 0);

    int num;
    scanf("%d", &num);

    printf("%d", analisarArray(num, array, 0, 0));

    return 0;
}