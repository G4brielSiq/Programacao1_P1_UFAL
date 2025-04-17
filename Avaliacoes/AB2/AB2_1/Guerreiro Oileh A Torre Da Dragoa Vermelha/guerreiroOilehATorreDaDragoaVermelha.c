#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int combater(int *vida, int ataque, int inimigoVida, int inimigoAtaque)
{
    if (inimigoVida <= 0)
        return 1;

    if (*vida <= 0)
    {
        *vida = 0;
        return 0;
    }

    inimigoVida -= ataque;

    if (inimigoVida <= 0)
        return 1;

    *vida -= inimigoAtaque;

    return combater(vida, ataque, inimigoVida, inimigoAtaque);
}

void lerInimigos(int inimigosVida[], int inimigosAtaque[], int i, int total)
{
    if (i == total)
        return;

    scanf("%d %d", &inimigosVida[i], &inimigosAtaque[i]);
    lerInimigos(inimigosVida, inimigosAtaque, i + 1, total);
}

int escalarTorre(int vida, int ataque, int inimigosVida[], int inimigosAtaque[], int andar, int total, int *vidaFinal, int *ataqueFinal)
{
    if (andar > total)
    {
        *vidaFinal = vida;
        *ataqueFinal = ataque;
        return 1;
    }

    int venceu = combater(&vida, ataque, inimigosVida[andar - 1], inimigosAtaque[andar - 1]);

    if (!venceu)
    {
        *vidaFinal = vida;
        *ataqueFinal = ataque;
        return 0;
    }

    if (andar % 5 == 0)
        vida += 20;

    if (andar % 10 == 0)
        ataque += 5;

    return escalarTorre(vida, ataque, inimigosVida, inimigosAtaque, andar + 1, total, vidaFinal, ataqueFinal);
}

int main()
{
    int vidaInicial, ataqueInicial, totalAndares;
    scanf("%d %d %d", &vidaInicial, &ataqueInicial, &totalAndares);

    int inimigosVida[50], inimigosAtaque[50];

    lerInimigos(inimigosVida, inimigosAtaque, 0, totalAndares);

    int vidaFinal, ataqueFinal;

    int venceu = escalarTorre(vidaInicial, ataqueInicial, inimigosVida, inimigosAtaque, 1, totalAndares, &vidaFinal, &ataqueFinal);

    printf("%d %d\n", vidaFinal, ataqueFinal);

    if (venceu)
    {
        printf("Vamos para casa!\n");
    }

    else
    {
        printf("Eu voltarei!\n");
    }
    return 0;
}
