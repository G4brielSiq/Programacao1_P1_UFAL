#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 3.14159;
    double raio;

    scanf("%lf", &raio);

    double area = pi * ((raio/100) * (raio/100));

    printf("Area = %.4lf", area);

    return 0;
}