#include <stdio.h>
#include <math.h>

int ehPrimo(int num, int divisor)
{
    if (num <= 1)
        return 0;

    if (divisor == 1)
        return 1;

    if (num % divisor == 0)
        return 0;

    return ehPrimo(num, divisor - 1);
}

int saoCoprimos(int a, int b, int i)
{
    if (i > a || i > b)
        return 1;

    if (a % i == 0 && b % i == 0)
        return 0;

    return saoCoprimos(a, b, i + 1);
}

int calcularAumentoAtaque(int habilidade, int ataque, int vida, int ataqueInimigo, int vidaInimigo, int round)
{
    int aumento = 0;

    if (ehPrimo(round, round - 1))
        aumento += ataque;

    if (saoCoprimos(vida, vidaInimigo, 2))
        aumento += 25;


    if (ehPrimo(vida, vida - 1) || ehPrimo(ataque, ataque - 1))
        aumento += 10;

    return aumento;
}

void processarRodada(int rodada, int i, int habilidadeWill, int ataqueWill, int vidaWill, int habilidadeGabriel, int ataqueGabriel, int vidaGabriel, int *vitoriasWill, int *vitoriasGabriel)
{
    int ataqueWillFinal = ataqueWill + calcularAumentoAtaque(habilidadeWill, ataqueWill, vidaWill, ataqueGabriel, vidaGabriel, rodada);
    int ataqueGabrielFinal = ataqueGabriel + calcularAumentoAtaque(habilidadeGabriel, ataqueGabriel, vidaGabriel, ataqueWill, vidaWill, rodada);

    if (i == 1)
    {
        if (ataqueWillFinal >= vidaGabriel)
        {
            (*vitoriasWill)++;
        }
        else
        {
            if (ataqueGabrielFinal >= vidaWill)
            {
                (*vitoriasGabriel)++;
            }
            else 
                processarRodada(rodada + 1, 2, habilidadeWill, ataqueWill, vidaWill, habilidadeGabriel, ataqueGabriel, vidaGabriel, vitoriasWill, vitoriasGabriel);
        }
    }
    else
    {
        if (ataqueGabrielFinal >= vidaWill) 
        {
            (*vitoriasGabriel)++;
        }
        else
        {
            if (ataqueWillFinal >= vidaGabriel) 
                (*vitoriasWill)++;
            else 
                processarRodada(rodada + 1, 1, habilidadeWill, ataqueWill, vidaWill, habilidadeGabriel, ataqueGabriel, vidaGabriel, vitoriasWill, vitoriasGabriel);
        }
    }
}


void jogar(int rodadaAtual, int numRodadas, int *vitoriasWill, int *vitoriasGabriel)
{
    if (rodadaAtual == numRodadas)
    {
        printf("Will ganhou %d rodadas\n", *vitoriasWill);
        printf("Gabriel ganhou %d rodadas\n", *vitoriasGabriel);
        return;
    }

    int i;
    scanf("%d", &i); 

    int habilidadeWill, ataqueWill, vidaWill;
    scanf("%d %d %d", &habilidadeWill, &ataqueWill, &vidaWill); 
    int habilidadeGabriel, ataqueGabriel, vidaGabriel;
    scanf("%d %d %d", &habilidadeGabriel, &ataqueGabriel, &vidaGabriel); 

    processarRodada(1, i, habilidadeWill, ataqueWill, vidaWill, habilidadeGabriel, ataqueGabriel, vidaGabriel, vitoriasWill, vitoriasGabriel);

    jogar(rodadaAtual + 1, numRodadas, vitoriasWill, vitoriasGabriel);
}

int main()
{
    int numRodadas;
    scanf("%d", &numRodadas);

    int vitoriasWill = 0, vitoriasGabriel = 0;

    jogar(0, numRodadas, &vitoriasWill, &vitoriasGabriel);

    return 0;
}
