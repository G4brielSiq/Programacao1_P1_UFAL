#include <stdio.h>
#include <stdlib.h>

int rep (int x, int n)
{
    if(x >= n)
    {
        printf("\n%d", n);

        rep(x, n + 1);
    }
}

int main()
{
    int x;

    scanf("%d", &x);

    rep(x, 1);
    
    return 0;
}