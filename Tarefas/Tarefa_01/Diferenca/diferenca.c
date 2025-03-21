#include <stdio.h>
#include <stdlib.h>

// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.

int main() 
{
    int A, B, C, D, DIF;

    scanf("%d%d%d%d", &A, &B, &C, &D);

    DIF = (( A * B ) - ( C * D ));

    printf("DIFERENCA = %d", DIF);

    return 0;
}