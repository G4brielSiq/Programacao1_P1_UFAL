#include <stdio.h>

int contarMoedas(int n, int cont, int x, int y, int ladoAtual, int moedas)
{
    if (cont == n)
    {
        return moedas;
    }

    char direcao;

    scanf(" %c", &direcao);

    if (direcao == 'D')
    {
        x++;
    }
    else if (direcao == 'C')
    {
        y++;
    }

    int novoLado = (y > x) ? 1 : -1;

    if (novoLado != ladoAtual && y != x)
    {
        return contarMoedas(n, cont + 1, x, y, novoLado, moedas + 1);
    }

    return contarMoedas(n, cont + 1, x, y, ladoAtual, moedas);
}

int main()
{

    int viagens;

    scanf("%d", &viagens);

    char primeiraDirecao;

    scanf(" %c", &primeiraDirecao);

    int x = 0;
    int y = 0;

    if (primeiraDirecao == 'D')
    {
        x = 1;
    }

    else if (primeiraDirecao == 'C')
    {
        y = 1;
    }

    int ladoInicial = (y > x) ? 1 : -1; 

    printf("%d\n", contarMoedas(viagens, 1, x, y, ladoInicial, 0));

    return 0;
}
