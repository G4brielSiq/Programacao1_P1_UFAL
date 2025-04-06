#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lerNumeroTriangular(int cont, int num)
{
    if (num <= 0)
    {
        printf("Falso");

        return 0;
    }

    else if (cont != num)
    {
        if (((num - cont) * (num - (cont + 1)) * (num - (cont + 2))) == num)
        {
            printf("%d * %d * %d = %d\n", (num - (cont + 2)), (num - (cont + 1)), (num - cont), num);

            printf("Verdadeiro");

            return 0;
        }
    }

    else
    {
        printf("Falso");

        return 0;
    }

    return lerNumeroTriangular((cont + 1), num);
}

int main()
{
    int num;
    scanf("%d", &num);

    lerNumeroTriangular(0, num);

    return 0;
}