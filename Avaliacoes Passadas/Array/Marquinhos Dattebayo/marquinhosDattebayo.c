#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int duelar(int energia_atual, int *inimigos, int *ordem, int n, int i, int *derrotados) 
{
    if (i == n) return energia_atual;

    int idx_inimigo = ordem[i] - 1;
    int energia_inimigo = inimigos[idx_inimigo];

    if (energia_inimigo <= energia_atual) 
    {
        (*derrotados)++;

        energia_atual += energia_atual - energia_inimigo;
    }

    return duelar(energia_atual, inimigos, ordem, n, i + 1, derrotados);
}

void ler_energia(int *vetor, int n, int i) 
{
    if (i == n) return;

    scanf("%d", &vetor[i]);
    ler_energia(vetor, n, i + 1);
}

int main() {

    int energia_atual, n;

    scanf("%d", &energia_atual);
    scanf("%d", &n);

    int inimigos[n];
    int ordem[n];
    int derrotados = 0;

    ler_energia(inimigos, n, 0);
    ler_energia(ordem, n, 0);

    int energia_final = duelar(energia_atual, inimigos, ordem, n, 0, &derrotados);

    printf("Nível de energia: %d\n", energia_final);
    printf("%.2f%%\n", (100.0 * derrotados) / n);

    if (energia_final > 20000)
        printf("Marquinhos é o novo Mestre da Vila da Árvore!\n");
    else
        printf("Continue tentando!\n");

    return 0;
}
