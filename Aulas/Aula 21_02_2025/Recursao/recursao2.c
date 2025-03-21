#include <stdio.h>
#include <stdlib.h>

int soma(int n, int y)
{
    if (n =! y)
    {
        
        return pow(2, n) + soma(n - 1, y);
    }
}

int main()
{
    int x, resposta;

    scanf("%d", &x);

    resposta = soma(x, 1);

    printf("%d", resposta);

    return 0;
}