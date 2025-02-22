#include <stdio.h>
#include <stdlib.h>

// x é maior que y
// x é igual a y
// x é menor que y
// x é diferente de y
// x é maior ou igual a y
// x é menor ou igual a y

int main()
{

    int x, y;

    scanf("%d%d", &x, &y);

    printf("\n%d", x > y);
    
    printf("\n%d", x == y);

    printf("\n%d", x < y);

    printf("\n%d", x != y);

    printf("\n%d", x >= y);

    printf("\n%d", x <= y);

    return 0;
}