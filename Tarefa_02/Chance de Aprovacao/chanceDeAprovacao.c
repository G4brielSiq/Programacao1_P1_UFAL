#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que receba em uma mesma linha a quantidade de problemas passados pelo professor e a quantidade de questões resolvidas por um aluno. Em seguida, o programa deve calcular e imprimir na tela o percentual de atividades cumpridas juntamente com a chance de aprovação do aluno, ambos com 2 casas decimais, conforme regras da tabela acima. Além disso, deve atribuir um conceito variando de Pessimo a Excelente, conforme consta na tabela acima.

int main()
{

    int proProf, queResol;

    scanf("%d%d", &proProf, &queResol);

    double porcAtt = (((double)queResol / (double)proProf ) * 100);

    //pre1 = pre1 - ((pre1 / 100) * 15);

    if(porcAtt >= 0 && porcAtt < 20)
    {
        printf("\n%.2lf%% 4.40%% Pessimo", porcAtt);
    }

    else if(porcAtt >= 20 && porcAtt < 40)
    {
        printf("\n%.2lf%% 31.65%% Ruim", porcAtt);
    }

    else if(porcAtt >= 40 && porcAtt < 60)
    {
        printf("\n%.2lf%% 56.82%% Bom", porcAtt);
    }

    else if(porcAtt >= 60 && porcAtt < 80)
    {
        printf("\n%.2lf%% 80.00%% Muito Bom", porcAtt);
    }

    else if(porcAtt >= 80 && porcAtt <= 100)
    {
        printf("\n%.2lf%% 94.00%% Excelente", porcAtt);
    }
    
    return 0;
}