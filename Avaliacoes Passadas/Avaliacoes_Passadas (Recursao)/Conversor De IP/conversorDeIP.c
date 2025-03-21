#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcularLinhaDeBits(int cont, int posicao, int bitAtual)
{
    if (cont == 8)
    {
        return bitAtual;
    }

    int bit;

    scanf("%d", &bit);

    if (bit == 1)
    {
        bit = bit * pow(2, posicao);

        bitAtual = bitAtual + bit;

        return calcularLinhaDeBits((cont + 1), (posicao - 1), bitAtual);
    }

    bit = bit * pow(2, posicao);

    bitAtual = bitAtual + bit;

    return calcularLinhaDeBits((cont + 1), (posicao - 1), bitAtual);
}

int main()
{
    printf("%d.", calcularLinhaDeBits(0, 7, 0));
    printf("%d.", calcularLinhaDeBits(0, 7, 0));
    printf("%d.", calcularLinhaDeBits(0, 7, 0));
    printf("%d", calcularLinhaDeBits(0, 7, 0));

    return 0;
}