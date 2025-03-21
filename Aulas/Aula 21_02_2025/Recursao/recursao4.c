#include <stdio.h>
#include <stdlib.h>

int rep (int x, int n)
{
    if(x >= n)
    {
        printf("\n%d", x);

        rep(x - 1, n);
    }
}

int main()
{
    int x;

    scanf("%d", &x);

    rep(x, 1);
    
    return 0;
}