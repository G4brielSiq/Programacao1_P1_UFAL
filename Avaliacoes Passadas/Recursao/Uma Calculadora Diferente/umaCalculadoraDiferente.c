#include <stdio.h>
#include <stdlib.h>

// A (Add / Adicionar a),
// S (Subtract / Subtrair a),
// M (Multiply / Multiplicar por),
// D (Divide / Dividir por) e
// C (Change to / Trocar por).

double calcularNovoValor(int numLinhas, double valorInicial, int cont)
{
    if (cont == numLinhas)
    {
        return valorInicial;
    }

    else
    {
        char operacao;
        double X;

        scanf(" %c ", &operacao);
        scanf("%lf", &X);

        if (operacao == 'A')
        {
            valorInicial = valorInicial + X;
        }

        else if (operacao == 'S')
        {
            valorInicial = valorInicial - X;
        }

        else if (operacao == 'M')
        {
            valorInicial = valorInicial * X;
        }

        else if (operacao == 'D')
        {
            valorInicial = valorInicial / X;
        }

        else if (operacao == 'C')
        {
            valorInicial = X;
        }

        return calcularNovoValor(numLinhas, valorInicial, (cont + 1));
    }
}

int main()
{
    int numLinhas;
    double valorInicial;

    scanf("%d %lf", &numLinhas, &valorInicial);

    printf("Valor final: %.2lf", calcularNovoValor(numLinhas, valorInicial, 0));

    return 0;
}