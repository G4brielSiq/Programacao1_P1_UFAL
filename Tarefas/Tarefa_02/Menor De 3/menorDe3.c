#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia 3 números inteiros e imprima o menor deles.

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a > b || a > c)
    {
        if(b > c)
        {
            printf("%d", c);
        } else {
            printf("%d", b);
        }
    } 
    
    else 
    {
        printf("%d", a);
    }

    return 0;
}