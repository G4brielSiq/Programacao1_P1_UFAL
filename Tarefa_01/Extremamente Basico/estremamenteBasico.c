#include <stdio.h>
#include <stdlib.h>

// Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X.

//Imprima X conforme o exemplo de entrada saída apresentado. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir quebra de linha após o resultado.

int main()
{
    int A, B;

    scanf("%d%d", &A, &B);

    int X = ( A + B );

    printf("\nX = %d", X);

    return 0;
}