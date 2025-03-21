#include <stdio.h>
#include <stdlib.h>

// Escreva uma função recursiva chamada ContaDigitosPares que receba como entrada um número e retorne a quantidade de dígitos pares que o compõem.

// Ex: 234 tem 3 dígitos, mas apenas 2 são pares

int ContaDigitosPares(int n) 
{
    if (n == 0) {

        return 0;
    }
    
    int ultimoDigito = n % 10;

    int par = (ultimoDigito % 2 == 0) ? 1 : 0;
     
    return par + ContaDigitosPares(n / 10);
}

int main() {

    int num;
    
    scanf("%d", &num);
    
    if (num < 0) {

        num = -num;
    }
    
    int resul = ContaDigitosPares(num);

    printf("\n%d", resul);
    
    return 0;
}
