#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void lerDias(int cont, int qntCaps)
{
    if (cont != 7)
    {
        int qtnCaixas;
        char tamCaixas;

        scanf(" %d %c", &qtnCaixas, &tamCaixas);

        if ((tamCaixas == 'p') || (tamCaixas == 'P'))
        {
            qntCaps = qntCaps + (qtnCaixas * 10);

            lerDias((cont + 1), qntCaps);
        }

        else if ((tamCaixas == 'g') || (tamCaixas == 'G'))
        {
            qntCaps = qntCaps + (qtnCaixas * 16);

            lerDias((cont + 1), qntCaps);
        }
    }

    else
    {
        printf("%d\n", qntCaps);
        printf("%d", ((qntCaps * 2) / 7));

        return;
    }
}

int main()
{
    lerDias(0, 0);

    return 0;
}