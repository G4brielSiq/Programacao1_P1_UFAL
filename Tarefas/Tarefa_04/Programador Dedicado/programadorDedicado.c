#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void lerDias(int cont, int qntProg, int qntLinhas, int diaMaiorLinhas, int dia)
{
    if (cont == 0)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", qntProg);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", qntLinhas);

        if (dia == 7)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO");
        }

        if (dia == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
        }

        if (dia == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA");
        }

        if (dia == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA");
        }

        if (dia == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA");
        }

        if (dia == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA");
        }

        if (dia == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO");
        }

        return;
    }

    int prog, linhas;
    scanf("%d %d", &prog, &linhas);

    if (prog >= 5)
    {
        qntProg = qntProg + 1;
    }

    if (linhas >= 100)
    {
        qntLinhas = qntLinhas + 1;
    }

    if (linhas >= diaMaiorLinhas)
    {
        diaMaiorLinhas = linhas;

        dia = cont;
    }

    lerDias((cont - 1), qntProg, qntLinhas, diaMaiorLinhas, dia);
}

int main()
{
    lerDias(7, 0, 0, 0, 0);

    return 0;
}