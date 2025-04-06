#include<stdio.h>

int quantas_vezes(int i, int n, int numeros[], int num)
{
    if (i < n)
    {
        if (numeros[i] == num)
        {
            return 1 + quantas_vezes(i + 1, n, numeros, num);
        }
        
        else
        {
            return 0 + quantas_vezes(i + 1, n, numeros, num);
        }
    }

    return 0;
}

void ler_numeros(int i, int n, int numeros[])
{
    if (i < n)
    {
        scanf("%d", &numeros[i]);

        ler_numeros(i + 1, n, numeros);
    }
}

void loop()
{
    int numeros[1000];

    scanf("%d", &numeros[0]);

    if (numeros[0] == -1)
    {
        return;
    }
    
    ler_numeros(1, 1000, numeros);

    int n;

    scanf("%d", &n);

    printf("%d appeared %d times\n", n, quantas_vezes(0, 1000, numeros, n));

    loop();
}

int main()
{
    loop();
    
    return 0;
}