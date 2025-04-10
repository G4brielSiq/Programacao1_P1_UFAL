#include <stdio.h>
#include <stdlib.h>

int calcularSoma(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + calcularSoma(num / 10);
}

void reescreverMensagem(int tamanhoMensagem, int cont)
{
    if (cont < tamanhoMensagem)
    {
        char mensagem;
        scanf(" %c", &mensagem);

        reescreverMensagem(tamanhoMensagem, (cont + 1));

        printf("%c", mensagem);
    }
}

void contarMensagens(int qntMensagens, int cont)
{
    if (cont == qntMensagens)
    {
        return NULL;
    }

    int numDaMensagem;
    scanf("%d", &numDaMensagem);

    int tamanhoDaMensagem = calcularSoma(numDaMensagem);

    reescreverMensagem(tamanhoDaMensagem, 0);

    printf("\n");

    contarMensagens(qntMensagens, (cont + 1));
}

int main()
{
    int qntMensagens;

    scanf("%d", &qntMensagens);

    contarMensagens(qntMensagens, 0);

    return 0;
}