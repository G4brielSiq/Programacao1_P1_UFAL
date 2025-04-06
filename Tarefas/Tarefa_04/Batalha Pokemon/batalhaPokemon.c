#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int turnosParaMatar(double vida, double dano)
{
    return (int)ceil(vida / dano);
}

int clodesVence(double V1, double V2, double D1, double D2, int buffs)
{
    double danoClodes = D1 + buffs * 50;
    int turnosAtaque = turnosParaMatar(V2, danoClodes);
    int totalTurnos = buffs + turnosAtaque;

    int ataquesBezaliel = totalTurnos - 1;
    double danoRecebido = ataquesBezaliel * D2;

    if (danoRecebido < V1)
    {
        return 1;
    }

    if (buffs > 1000)
    {
        return 0;
    }

    return clodesVence(V1, V2, D1, D2, buffs + 1);
}

void resolverBatalhas(int num)
{
    if (num == 0)
    {
        return;
    }
    
    double V1, V2, D1, D2;
    scanf("%lf %lf %lf %lf", &V1, &V2, &D1, &D2);

    if (clodesVence(V1, V2, D1, D2, 0))
    {
        printf("Clodes\n");
    }

    else
    {
        printf("Bezaliel\n");
    }

    resolverBatalhas(num - 1);
}

int main()
{
    int num;
    scanf("%d", &num);

    resolverBatalhas(num);

    return 0;
}
