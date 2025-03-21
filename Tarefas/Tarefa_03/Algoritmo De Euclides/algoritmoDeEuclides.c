#include <stdio.h>
#include <stdlib.h>

// A = D * Q + R

// Onde A é o numero a ser dividido, D é o dividendo, Q é o quociente da divisão inteira de A por D e R é o mod ou resto da divisão inteira.

// digamos que queremos calcular o mdc(36,24).

// 36 = 24 * 1 + 12

// perceba que 12 é divisor de 36 e 24

// portanto o mdc(36,24) = mdc(24,12)

// 24 = 12 * 2 + 0

// como o resto é 0 sabemos que 12 divide 24

// mdc(36,24)=mdc(24,12)=12

int calcularMDC(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    
    return calcularMDC(b, a % b);
}

int contarCasos(int n, int cont)
{
    if (cont < n)
    {
        int n1, n2;

        scanf("%d %d", &n1, &n2);

        printf("MDC(%d,%d) = %d\n", n1, n2, calcularMDC(n1, n2));

        return contarCasos(n, cont + 1);
    }

    return 0;
}

int main()
{
    int casos;

    scanf("%d", &casos);

    contarCasos(casos, 0);

    return 0;
}