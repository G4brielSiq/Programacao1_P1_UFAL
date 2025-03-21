#include <stdio.h>
#include <stdlib.h>

int calcularMultiplos(int n, int a, int b, int cont)
{
    if (n > b)
    {
        return printf("INEXISTENTE");
    }

    if ((cont * n) >= a && (cont * n) <= b)
    {
        printf("%d\n", cont * n);
    }

    if ((cont * n) > b)
    {
        return 0;
    }

    return calcularMultiplos(n, a, b, (cont + 1));
}

int main()
{
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);

    calcularMultiplos(n, a, b, 0);

    return 0;
}