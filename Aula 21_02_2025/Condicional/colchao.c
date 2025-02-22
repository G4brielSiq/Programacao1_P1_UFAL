#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, H, L;

    scanf("%d%d%d%d%d", &A, &B, &C, &H, &L);

    int areaPorta = H * L;

    int areaCama1 = A * B;
    int areaCama2 = B * C;
    int areaCama3 = C * A;

    if (areaPorta >= areaCama1 || areaPorta >= areaCama2 || areaPorta >= areaCama3)
    {
        if ((H >= A && L >= B) || (L >= A && H >= A) 
            || (H >= B && L >= C) || (L >= B && H >= C) 
            || (H >= B && L >= A) || (L >= C && H >= A))
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