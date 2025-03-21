#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    if ((((A == B) && (A + B) != 0) ||
         ((B == C) && (B + C) != 0) ||
         ((C == A) && (C + A) != 0)))
    {
        printf("S");
    }

    else if ((A != B) && (A != C) && (B != C))
    {
        if (((A + B) == C) || ((B + C) == A) || ((C + A) == B))
        {
            printf("S");
        }
        else
        {
            printf("N");
        }
    }
    
    else
    {
        printf("N");
    }

    return 0;
}