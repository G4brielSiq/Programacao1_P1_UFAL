#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n)
{
    if (n == 1)
    {
        return 2;
    }
    
    else
    {
        return pow(2, n) + soma(n - 1);
    }
}

int main()
{
    int x, resposta;

    scanf("%d", &x);

    resposta = soma(x);
    
    printf("%d", resposta);

    return 0;
}