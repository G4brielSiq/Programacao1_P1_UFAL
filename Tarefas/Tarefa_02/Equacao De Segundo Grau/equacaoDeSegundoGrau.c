#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    double delta = (pow(b, 2)) - (4 * a * c);

    if (delta >= 0 && a != 0)
    {
        double x1 = (- b + (sqrt(delta))) / (2 * a);
        double x2 = (- b - (sqrt(delta))) / (2 * a);
        printf("\n%.2lf", x1);
        printf("\n%.2lf", x2);    }

    else if (delta < 0)
    {
        printf("NRR");
    }

    else if (a == 0)
    {
        printf("NEESG");
    }

    return 0;
}