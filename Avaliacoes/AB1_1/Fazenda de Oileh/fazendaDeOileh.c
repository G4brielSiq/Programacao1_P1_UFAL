#include <stdio.h>
#include <stdlib.h>

// Um número X representando a área que a poção fará efeito.
// Um caractere Y representando a fase da lua.
// Um número Z representando a área da fazenda.
// Um número W representando a quantidade de água para irrigação.
// Um número inteiro T representando a temperatura ambiente no momento da preparação.

int main()
{
    double X;
    char Y;
    double Z;
    double W;
    double T;

    scanf("%lf%c%lf%lf%lf", &X, &Y, &Z, &W, &T);

    // Se a poção for preparada durante a lua crescente ('C'), sua eficiência aumenta em 50%.
    // Se for feita durante a lua cheia ('F'), sua eficiência aumenta em 20%.
    // Se for feita em qualquer outra fase da lua ('M' para minguante e 'N' para nova), a eficiência diminui em 10%.

    if (Y == 'C')
    {
        X = X + ((X / 100) * 50);
    }

    else if (Y == 'F')
    {
        X = X + ((X / 100) * 20);
    }

    else if ((Y == 'M') || (Y == 'N'))
    {
        X = X - ((X / 100) * 10);
    }

    // As plantas precisam de pelo menos 2 litros de água para cada metro quadrado de plantação.
    // Se estiverem corretamente hidratadas, a eficiência da poção aumenta em 30%.
    // Se não estiverem bem hidratadas, a eficiência da poção diminui em 25%.

    if (W >= (2 * Z))
    {
        X = X + ((X / 100) * 30);
    }

    else if (W < (2 * Z))
    {
        X = X - ((X / 100) * 25);
    }

    // Menos de 10°C → Eficiência diminui 15% (frio excessivo reduz a absorção da poção).
    // Mais de 25°C → Eficiência aumenta 25% (o calor acelera o crescimento).

    if (T > 25)
    {
        X = X + ((X / 100) * 25);
    }

    else if (T < 10)
    {
        X = X - ((X / 100) * 15);
    }

    if (X > Z)
    {
        printf("\n%.2lf", X);
        printf("\nOh nao, a fazenda cresceu demais!");
    }

    else
    {
        printf("\n%.2lf", X);
    }

    return 0;
}