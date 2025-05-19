#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void preencherArray(int bits[], int numBits, int cont)
{
    if (cont == numBits)
    {
        return;
    }

    scanf("%d", &bits[cont]);

    preencherArray(bits, numBits, (cont + 1));
}

int calcularSequenciaDeRepeticao(int bits[], int numBits, int cont, int bitsRep, int maiorSeq)
{
    if (cont == (numBits - 1))
    {
        return (bitsRep + 1 > maiorSeq) ? bitsRep + 1 : maiorSeq;
    }

    if (bits[cont] == bits[cont + 1])
    {
        if (bitsRep + 1 > maiorSeq)
        {
            maiorSeq = bitsRep + 1;
        }

        bitsRep = 0;
    }

    else
    {
        bitsRep++;
    }

    return calcularSequenciaDeRepeticao(bits, numBits, (cont + 1), bitsRep, maiorSeq);
}

int contarCasos(int num, int cont, int maiorSeq)
{
    if (cont == num)
    {
        return maiorSeq;
    }

    int numBits;
    scanf("%d", &numBits);

    int bits[numBits];

    preencherArray(bits, numBits, 0);

    int seq = calcularSequenciaDeRepeticao(bits, numBits, 0, 0, 0);

    if (seq > maiorSeq)
        maiorSeq = seq;

    return contarCasos(num, cont + 1, maiorSeq);
}

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d\n", contarCasos(num, 0, 0));

    return 0;
}
