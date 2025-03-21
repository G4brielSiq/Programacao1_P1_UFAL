#include <stdio.h>

// Faça um programa que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

int main ()
{
    int num, ant, suc;

    printf("Informe um número: ");
    scanf("%d", &num);
    
    ant = num - 1;
    suc = num + 1;

    printf("%d %d", ant, suc);

    return 0;
}