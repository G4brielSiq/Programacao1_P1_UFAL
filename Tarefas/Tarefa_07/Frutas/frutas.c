#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar();

    float valores[N];
    char frutas[N][1000];

    for (int i = 0; i < N; i++)
    {
        scanf("%f", &valores[i]);
        getchar();
        fgets(frutas[i], sizeof(frutas[i]), stdin);
    }

    int totalFrutas = 0;
    float totalValores = 0.0;

    for (int i = 0; i < N; i++)
    {
        int count = 0;
        char linha[1000];
        strcpy(linha, frutas[i]);

        char *token = strtok(linha, " \n");
        while (token != NULL)
        {
            count++;
            token = strtok(NULL, " \n");
        }

        printf("dia %d: %d kg\n", i + 1, count);

        totalFrutas += count;
        totalValores += valores[i];
    }

    printf("%.2f kg por dia\n", (float)totalFrutas / N);
    printf("R$ %.2f por dia\n", totalValores / N);

    return 0;
}