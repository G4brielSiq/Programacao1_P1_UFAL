#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double racao, tempSono, larg, altu;
    char form, clim;
    double impac, tempTrab;

    scanf("%lf %lf %lf %lf %c %c %lf %lf", &racao, &tempSono, &larg, &altu, &form, &clim, &impac, &tempTrab);

    double dispos = racao * (tempSono / 60.0);

    // Se Aim trabalhou mais de 6 horas no dia anterior, sua disposiçãoo inicial será reduzida em 20%.
    if (tempTrab > 6)
    {
        dispos = dispos - ((dispos / 100.0) * 20.0);
    }

    double areaParq = 0.0;

    // 't' para triangulo.
    if (form == 't')
    {
        areaParq = ((altu * larg) / 2.0);
    }

    // 'r' para retangulo.
    else if (form == 'r')
    {
        areaParq = (altu * larg);
    }

    // 'c' para circulo (nesse caso, a largura sera o raio do circulo).
    else if (form == 'c')
    {
        areaParq = 3.14 * (larg * larg);
    }

    // Se a area for maior que 500 m², Aim se cansa mais rápido e sua disposição será reduzida em 15%.
    if (areaParq > 500.0)
    {
        dispos = dispos - ((dispos / 100.0) * 15.0);
    }

    double impacGeral = 0.0;

    // Chuva: reduz 30% da disposição baseada no impacto climático.
    if (clim == 'c')
    {
        impacGeral = (30.0 / 100.0) * impac;
        dispos = dispos - ((dispos / 100.0) * impacGeral);
    }

    // Sol forte: aumenta 47% da disposição baseada no impacto climático.
    else if (clim == 's')
    {
        impacGeral = (47.0 / 100.0) * impac;
        dispos = dispos + ((dispos / 100.0) * impacGeral);
    }

    // Neve: reduz 67% da disposição baseada no impacto climático.
    else if (clim == 'n')
    {
        impacGeral = (67.0 / 100.0) * impac;
        dispos = dispos - ((dispos / 100.0) * impacGeral);
    }

    double total = dispos / areaParq;

    // OBS1: Lembrando que mesma cansada Aim nunca trabalha menos que 1 hora.
    if (total < 1.0)
    {
        total = 1.0;
    }

    double valor = 70.00 * total;

    printf("\nAim trabalhou %.2lf horas e recebeu: %.2lf Reais", total, valor);

    return 0;
}