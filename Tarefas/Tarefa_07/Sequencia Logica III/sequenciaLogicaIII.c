#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    int cont = 0;

    for (int i = 1; i <= Y; i += Z)
    {
        printf("%d", i);
        cont++;

        if (i + Z <= Y && cont < X)
        {
            printf(" ");
        }

        if (cont == X)
        {
            printf("\n");
            cont = 0;
        }
    }

    if (cont != 0)
    {
        printf("\n");
    }

    return 0;
}