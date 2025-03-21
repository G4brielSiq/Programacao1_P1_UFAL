#include <stdio.h>
#include <stdlib.h>

// "Aprovado", se a média estiver no intervalo [70; 100]
// "Reprovado", se a média estiver no intervalo [0; 40] 
// "Final", se a média estiver no intervalo (40; 70).
// "Média inválida" em qualquer outro caso.

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    double media = (a + b + c) / 3.00;

    if (media >= 70.00 && media <= 100.00)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO", media);
    }

    else if (media < 70.00 && media >= 40.00)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL", media);
    }

    else if (media < 40.00 && media >= 0.00)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO", media);
    }

    else
    {
        printf("Media invalida");
    }

    return 0;
}