#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define MAX 10005

int main()
{
    char a[MAX], b[MAX], res[MAX];
    int i, j, k, carry = 0;

    scanf("%s", a);
    scanf("%s", b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    i = lenA - 1;
    j = lenB - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int digA = (i >= 0) ? a[i--] - '0' : 0;
        int digB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = digA + digB + carry;

        res[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    for (int m = k - 1; m >= 0; m--)
    {
        putchar(res[m]);
    }

    putchar('\n');

    return 0;
}