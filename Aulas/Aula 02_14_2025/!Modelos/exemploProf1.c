#include <stdio.h>

int main()
{
    int a, b, c, aux;

    scanf("%d%d%d", &a, &b, &c);

    if (b < a || c < a)
    {
        if (b < c)
        {
            aux = a;
            a = b;
            b = a;
        }

        else
        {
            aux = a;
            a = c;
            c = a;
        }

        if (c < b)
        {
            aux = b;
            b = c;
            c = aux;
        }
    }

    printf("%d%d%d", a, b, c);

    return 0;
}