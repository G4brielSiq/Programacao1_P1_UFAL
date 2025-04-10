#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int imprimirMaior(int maior)
{
    int numDado;
    scanf("%d", &numDado);

    if (numDado != 0)
    {
        if (numDado >= maior)
        {
            return imprimirMaior(numDado);
        }

        return imprimirMaior(maior);
    }

    return maior;
}

int main()
{
    printf("%d", imprimirMaior(0));

    return 0;
}