#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, qnt;

    scanf("%d%d", &cod, &qnt);

    double pre1 = 5.30 * qnt;
    double pre2 = 6.00 * qnt;
    double pre3 = 3.20 * qnt;
    double pre4 = 2.50 * qnt;

    if((cod == 1) && (qnt >= 15 || pre1 >= 40))
    {
        pre1 = pre1 - ((pre1 / 100) * 15);
        printf("R$ %.2lf", pre1);
    } 
    
    else if(cod == 1)
    {
        printf("R$ %.2lf", pre1);
    }

    if(cod == 2 && (qnt >= 15 || pre2 >= 40))
    {
        pre2 = pre2 - ((pre2 / 100) * 15);
        printf("R$ %.2lf", pre2);
    }

    else if(cod == 2)
    {
        printf("R$ %.2lf", pre2);
    }
    
    if(cod == 3 && (qnt >= 15 || pre3 >= 40))
    {
        pre3 = pre3 - ((pre3 / 100) * 15);
        printf("R$ %.2lf", pre3);
    }

    else if(cod == 3)
    {
        printf("R$ %.2lf", pre3);
    }

    if(cod == 4 && (qnt >= 15 || pre4 >= 40))
    {
        pre4 = pre4 - ((pre4 / 100) * 15);
        printf("R$ %.2lf", pre4);
    }
    
    else if(cod == 4)
    {
        printf("R$ %.2lf", pre4);
    }

    return 0;
}