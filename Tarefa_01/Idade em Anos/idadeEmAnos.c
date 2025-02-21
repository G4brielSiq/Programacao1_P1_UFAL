#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que leia a idade de uma pessoa e informe quantos segundos ela viveu.
//Obs: Considere que um ano sempre tem 365 dias.

int main()
{
    int idade;

    scanf("%d", &idade);

    int seg = ((((idade * 365) * 24) * 60 ) * 60 ); 

    printf("%d", seg);
    
    return 0;
}