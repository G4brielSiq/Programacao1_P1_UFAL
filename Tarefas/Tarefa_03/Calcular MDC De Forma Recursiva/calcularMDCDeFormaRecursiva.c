#include <stdio.h>
#include <stdlib.h>

int calcularFatorialRecursivamente(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return calcularFatorialRecursivamente(b, a % b);
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    
    printf("%d", calcularFatorialRecursivamente(num1, num2));

    return 0;
}