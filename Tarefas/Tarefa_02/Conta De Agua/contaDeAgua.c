#include <stdio.h>
#include <stdlib.h>

// 0 - 10 = 10 => 7
// 11 - 30 = 20 =*> 1 => 20
// 31 - 100 = 70 =*> 2 => 140
// 101 - +8 = x =*> 5 => 5 * x

int main()
{
    int consu, val;

    scanf("%d", &consu);

    if (consu <= 10)
    {
        printf("7");
    }

    else if (consu > 10 && consu <= 30)
    {
        val = ((consu - 10) * 1) + 7;
        printf("%d", val);
    }

    else if (consu > 30 && consu <= 100)
    {
        val = ((consu - 20) * 2) + 7;
        printf("%d", val);
    }

    else if (consu > 100)
    {
        val = ((consu - 100) * 5) + 167;
        printf("%d", val);
    }

    return 0;
}