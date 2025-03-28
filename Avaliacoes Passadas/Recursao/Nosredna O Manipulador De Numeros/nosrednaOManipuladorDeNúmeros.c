#include <stdio.h>
#include <stdlib.h>

// Função para calcular a soma dos dígitos de um número
int somaDosDigitos(int num) 
{
    if (num == 0) 
    {
        return 0;
    }

    return (num % 10) + somaDosDigitos(num / 10);
}

int ehPrimo(int num, int divisor) 
{
    if (num < 2) 
    {
        return 0;
    }

    if ((divisor * divisor) > num) 
    {
        return 1;
    }
    
    if ((num % divisor) == 0) 
    {
        return 0;
    }
    
    return ehPrimo(num, divisor + 1);
}

int combinarNumeros(int numCombinacoes, int numInicial, int cont) 
{
    if (numCombinacoes == cont) 
    {
        return numInicial;
    }

    int num;

    scanf("%d", &num);

    if (ehPrimo(numInicial, 2) && ehPrimo(num, 2)) 
    {
        numInicial = numInicial + num;
    } 

    else 
    {
        numInicial = somaDosDigitos(numInicial) * somaDosDigitos(num);
    }

    return combinarNumeros(numCombinacoes, numInicial, (cont + 1));
}

int main() 
{
    int numCombinacoes, numInicial;

    scanf("%d %d", &numCombinacoes, &numInicial);

    int resultado = combinarNumeros(numCombinacoes, numInicial, 0);

    printf("%d\n", resultado);

    return 0;
}
