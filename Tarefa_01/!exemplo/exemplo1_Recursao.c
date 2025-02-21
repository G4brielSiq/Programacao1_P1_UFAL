#include <stdio.h>

void crescente(int atual, int parada)
{
    if (atual <= parada)
    {
        printf("%d\n", atual);
        crescente(atual + 1, parada);
    }
}

void decrescente(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        decrescente(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    crescente(1, n);
    printf("##############\n");
    decrescente(n);
    

    return 0;
}