#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double calcularMultas(double totalMulta, int casasMultadas)
{
    int veiculos;
    scanf("%d", &veiculos);

    if (veiculos == 999)
    {
        printf("%.2lf\n%d\n", totalMulta, casasMultadas);

        return 0;
    }

    if (veiculos > 2)
    {
        totalMulta = totalMulta + ((veiculos - 2) * 12.89);
        casasMultadas = casasMultadas + 1;
    }

    return calcularMultas(totalMulta, casasMultadas);
}

int main()
{
    calcularMultas(0.0, 0);

    return 0;
}
