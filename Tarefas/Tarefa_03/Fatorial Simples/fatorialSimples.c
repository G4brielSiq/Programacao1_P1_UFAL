#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int a)
{
    if (a > 1)
    {
        return a * calcularFatorial(a - 1);
    }

    else if (a <= 0)
    {
        return 1;
    }

    else
    {
        return a;
    }
}

int main()
{
    int fat;

    scanf("%d", &fat);

    printf("%d", calcularFatorial(fat));

    return 0;
}