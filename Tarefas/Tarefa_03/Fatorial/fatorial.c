#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int a)
{
    if (a >= 1)
    {
        return a * calcularFatorial(a - 1);
    }

    else if (a < 1)
    {
        return 1;
    }

    else
    {
        return a;
    }
}

int repetirCasos(int a)
{
    if (a >= 0 && a <= 12)
    {
        printf("%d\n", calcularFatorial(a));

        int fatN;

        scanf("%d", &fatN);

        return repetirCasos(fatN);
    }

    else if (a <= -1)
    {
        return 0;
    }
}

int main()
{
    int fat1;

    scanf("%d", &fat1);

    repetirCasos(fat1);

    return 0;
}