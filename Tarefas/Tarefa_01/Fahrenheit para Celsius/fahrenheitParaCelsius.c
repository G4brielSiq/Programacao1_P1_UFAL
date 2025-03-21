#include <stdio.h>
#include <stdlib.h>

int main()
{
    double far;

    scanf("%lf", &far);

    double cel = (far - 32) / 1.8000;

    printf("%.2lf", cel);

    return 0;
}