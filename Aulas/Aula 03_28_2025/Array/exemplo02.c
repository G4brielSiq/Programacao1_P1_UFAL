#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int quantas_vezes(int i, int n, int numeros[], int num, int cont)
// {
//     if (i < n)
//     {
//         if (numeros[i] == num)
//         {
//             cont = cont + 1;
//         }

//        return quantas_vezes((i + 1), n, numeros, num, cont);
//     }

//     return cont;
// }

int quantas_vezes(int i, int n, int numeros[], int num)
{
    if (i < n)
    {
        if (numeros[i] == num)
        {
            return 1 + quantas_vezes((i + 1), n, numeros, num);
        }

        else
        {
            return 0 + quantas_vezes((i + 1), n, numeros, num);
        }
    }

    return 0;
}

void loop(int i, int n, int numeros[])
{
    if (i < n)
    {
        scanf("%d", &numeros[i]);

        loop(i + 1, n, numeros);
    }
}

int main()
{
    int numeros[10];

    loop(0, 10, numeros);

    // printf("%d\n", numeros[0]);
    // printf("%d\n", numeros[1]);
    // printf("%d\n", numeros[2]);

    int num;

    scanf("%d", &num);

    printf("%d", quantas_vezes(0, 10, numeros, num));

    // printf("%d", quantas_vezes(0, 10, numeros, num, 0));

    return 0;
}