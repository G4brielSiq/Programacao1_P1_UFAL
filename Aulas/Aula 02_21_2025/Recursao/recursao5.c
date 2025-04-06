#include <stdio.h>
#include <stdlib.h>

int cont (int x)
{
    return x = (x + 1);
}

int rep (int x, int n, int cont)
{
    if(x >= n)
    {
        if(n % 7 == 0)
        {
            cont = cont + 1;
            printf("\n%d", cont);
        }

        rep(x, n + 1, cont);
    }
}

int main()
{
    int x;

    scanf("%d", &x);

    rep(x, 1, 0);
    
    return 0;
}