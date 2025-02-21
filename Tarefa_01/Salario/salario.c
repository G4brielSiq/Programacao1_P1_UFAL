#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, hrs;
    double vph;

    scanf("%d%d%lf", &num, &hrs, &vph);

    double sal = (hrs * vph);

    printf("\nNUMBER = %d", num);
    printf("\nSALARY = R$ %.2lf", sal);

    return 0;
}