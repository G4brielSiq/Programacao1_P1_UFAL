#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    for (int i = 1; i <= Y; i++)
    {
        printf("%d", i);

        if (i % X == 0 || i == Y)
        {
            printf("\n");
        }

        else
        {
            printf(" ");
        }
    }

    return 0;
}