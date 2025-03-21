#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liv, alu;

    scanf("%d%d", &liv, &alu);

    double media = alu / liv;

    if (media >= 1 && media <= 8)
    {
        printf("A");
    }

    else if (media >= 9 && media <= 12)
    {
        printf("B");
    }

    else if (media >= 13 && media <= 18)
    {
        printf("C");
    }

    else if (media >= 18)
    {
        printf("D");
    }

    return 0;
}