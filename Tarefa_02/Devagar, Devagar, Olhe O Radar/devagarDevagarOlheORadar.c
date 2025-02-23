#include <stdio.h>
#include <stdlib.h>

int main()
{
    double velVia, velCon;

    scanf("%lf%lf", &velVia, &velCon);

    if (velCon > velVia)
    {
        if (((velCon - velVia) / 100) < 0.2)
        {
            printf("85.13");
            printf("\n4");
        }

        else if (((velCon - velVia) / 100) >= 0.2 &&
                 ((velCon - velVia) / 100) <= 0.5)
        {
            printf("127.69");
            printf("\n5");
        }

        else if (((velCon - velVia) / 100) > 0.5)
        {
            printf("574.62");
            printf("\n7");
        }
    }

    else
    {
        printf("\n0.00");
        printf("\n0");
    }

    return 0;
}