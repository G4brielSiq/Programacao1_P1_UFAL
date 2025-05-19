#include <stdio.h>
#include <stdlib.h>

int ContaDigitos(int num)
{
    if (num > 0 && num <= 9)
    {
        if ((num % 2) == 0)
        {
            return printf(".\n");
        }

        else
        {
            return printf("-\n");
        }
    }

    int ultimoDigito = num % 10;

    if ((ultimoDigito % 2) == 0)
    {
        printf(".");

        return ContaDigitos(num / 10);
    }

    else
    {
        printf("-");

        return ContaDigitos(num / 10);
    }
}

int repetirCasos(int caso)
{
    if (caso < 10)
    {
        int num;

        scanf("%d", &num);

        ContaDigitos(num);

        return repetirCasos(caso + 1);
    }

    return 0;
}

int main()
{
    repetirCasos(0);

    return 0;
}
