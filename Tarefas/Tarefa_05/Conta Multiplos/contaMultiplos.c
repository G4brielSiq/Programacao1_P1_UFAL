#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int contarMultiplosComuns(int a, int b, int atual, int cont)
{
    if (atual == 50)
    {
        return cont;
    }

    if (((atual % a) == 0) && ((atual % b) == 0))
    {
        cont++;
    }

    return contarMultiplosComuns(a, b, (atual + 1), cont);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", contarMultiplosComuns(a, b, 1, 0));

    return 0;
}
