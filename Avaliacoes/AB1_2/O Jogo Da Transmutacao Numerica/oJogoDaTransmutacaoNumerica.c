#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcularProduto(int num)
{
    if ((num == 0) || (num <= 9))
    {
        return num;
    }

    if ((num % 10) == 0)
    {
        return calcularProduto(num / 10);
    }

    return (num % 10) * calcularProduto(num / 10);
}

int contarNumeros(int numN, int numSInicial, int cont)
{
    if (cont == numN)
    {
        return numSInicial;
    }

    int numS;

    scanf("%d", &numS);

    // Se s e x forem ambos números pares, então você deverá dividir cada um deles por 2 e, em seguida, somar os resultados. Essa soma será o novo valor de s.

    if (((numSInicial % 2) == 0) && ((numS % 2) == 0))
    {
        numSInicial = numSInicial / 2;
        numS = numS / 2;

        numS = numS + numSInicial;

        return contarNumeros(numN, numS, (cont + 1));
    }

    // Se s e x forem ambos números ímpares, então para cada um deles você deverá calcular o produto de seus dígitos. Depois, some os dois produtos obtidos; esse valor passará a ser o novo s.

    else if (((numSInicial % 2) != 0) && ((numS % 2) != 0))
    {
        numSInicial = calcularProduto(numSInicial);

        numS = calcularProduto(numS);

        numS = numS + numSInicial;

        return contarNumeros(numN, numS, (cont + 1));
    }

    // Se s e x não tiverem a mesma paridade (isto é, um é par e o outro é ímpar), determine o novo valor de s calculando a diferença entre s e x e tomando o valor absoluto dessa diferença.

    else
    {
        numS = numSInicial - numS;

        if (numS < 0)
        {
            numS = -numS;
        }

        return contarNumeros(numN, numS, (cont + 1));
    }
}

int main()
{
    int numN, NumSInicial;

    scanf("%d %d", &numN, &NumSInicial);

    printf("%d", contarNumeros(numN, NumSInicial, 0));

    return 0;
}