#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

// 500 480
// 20 30 r
// c 50
// 5

int main()
{
    double racao, tempSono;
    double larg, altu;
    char form;
    char clim;
    double impac, tempTrab;

    scanf("%lf %lf", &racao, &tempSono);
    scanf("%lf %lf", &larg, &altu);
    scanf(" %c", &form);
    scanf(" %c", &clim);
    scanf("%lf %lf", &impac, &tempTrab);

    double dispos = racao * (tempSono / 60.0);

    // Se Aim trabalhou mais de 6 horas no dia anterior, sua disposi??o inicial ser? reduzida em 20%.
    if (tempTrab > 6.0)
    {
        dispos = dispos - ((dispos / 100.0) * 20.0);
    }

    double areaParq;

    // 't' para tri?ngulo.
    if (form == 't')
    {
        areaParq = ((altu * larg) / 2.0);
    }

    // 'r' para ret?ngulo.
    else if (form == 'r')
    {
        areaParq = (altu * larg);
    }

    // 'c' para c?rculo (nesse caso, a largura ser? o raio do c?rculo).
    else if (form == 'c')
    {
        areaParq = 3.14 * (larg * larg);
    }

    // Se a ?rea for maior que 500 m?, Aim se cansa mais r?pido e sua disposi??o ser? reduzida em 15%.
    if (areaParq > 500.0)
    {
        dispos = dispos - ((dispos / 100.0) * 15.0);
    }

    // Chuva: reduz 30% da disposição baseada no impacto clim?tico.
    if (clim == 'c')
    {
        dispos = dispos - (dispos / 100.0 * ((impac / 100) * 30.0));
    }

    // Sol forte: aumenta 47% da disposição baseada no impacto clim?tico.
    else if (clim == 's')
    {
        dispos = dispos + (dispos / 100.0 * ((impac / 100.0) * 47.0));
    }

    // Neve: reduz 67% da disposição baseada no impacto clim?tico.
    else if (clim == 'n')
    {
        dispos = dispos - (dispos / 100.0 * ((impac / 100) * 67.0));
    }

    double total = dispos / areaParq;

    // OBS1: Lembrando que mesma cansada Aim nunca trabalha menos que 1 hora.
    if (total < 1.0)
    {
        total = 1.0;
    }

    double valor = 70.00 * total;

    printf("Aim trabalhou %.2lf horas e recebeu: %.2lf Reais", total, valor);

    return 0;
}