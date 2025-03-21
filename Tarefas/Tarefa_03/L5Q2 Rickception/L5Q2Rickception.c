#include <stdio.h>
#include <stdlib.h>

int serie(int i, int t, int atual)
{
    if (i == t)
    {
        return atual;
    }

    if (i % 2 == 0)
    {
        atual += 3;
    }

    else
    {
        atual += (atual % 5);
    }

    return serie(i + 1, t, atual);
}

int main()
{
    int n, t, resposta;

    scanf("%d%d", &n, &t);

    resposta = serie(0, t, n);

    printf("\n%d", resposta);

    return 0;
}