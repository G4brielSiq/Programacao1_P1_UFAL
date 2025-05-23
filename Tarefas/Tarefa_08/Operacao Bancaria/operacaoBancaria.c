#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() 
{
    int operacoes[100][2];
    double valores[100];        
    int count = 0;

    int tipo;
    double valor;

    while (scanf("%d", &tipo) == 1 && tipo != -1) 
    {
        scanf("%lf", &valor);
        operacoes[count][0] = tipo;
        valores[count] = valor;
        count++;
    }

    double totalCredito = 0.0;
    double totalDebito = 0.0;
    double saldo = 0.0;

    for (int i = 0; i < count; i++) 
    {
        if (operacoes[i][0] == 1) 
        {
            totalCredito += valores[i];
            saldo += valores[i];
        } 
        
        else if (operacoes[i][0] == 0) 
        {
            totalDebito += valores[i];
            saldo -= valores[i];
        }
    }

    printf("Creditos: R$ %.2lf\n", totalCredito);
    printf("Debitos: R$ %.2lf\n", totalDebito);
    printf("Saldo: R$ %.2lf\n", saldo);

    return 0;
}