#include <stdio.h>
#include <stdlib.h>

int rep (int x)
{
    if(x <= 10)
    {
        printf("\n%d", x);

        rep(x + 1);
    }

}

int main()
{
    int x;

    scanf("%d", &x);

    rep(x);
    
    return 0;
}