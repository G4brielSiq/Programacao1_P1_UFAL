#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void lerRespostas(char respostas[10], int index)
{
    if (index == 10)
    {
        return;
    }

    scanf(" %c", &respostas[index]);

    lerRespostas(respostas, index + 1);
}

int calcularNota(char gabarito[10], char respostas[10], int index, int nota)
{
    if (index == 10)
    {
        return nota;
    }

    if (respostas[index] == gabarito[index])
    {
        nota++;
    }

    return calcularNota(gabarito, respostas, index + 1, nota);
}

int encontrarNotaMaisFrequente(int frequencia[], int index, int notaMaisFrequente)
{
    if (index > 10)
    {
        return notaMaisFrequente;
    }

    if (frequencia[index] > frequencia[notaMaisFrequente])
    {
        notaMaisFrequente = index;
    }

    return encontrarNotaMaisFrequente(frequencia, index + 1, notaMaisFrequente);
}

void processarAlunos(char gabarito[10], int total, int aprovados, int frequencia[11])
{
    int numero;
    scanf("%d", &numero);

    if (numero == 9999)
    {
        float porcentagem = ((float)aprovados / total) * 100.0;

        printf("%.1f%%\n", porcentagem);

        int notaMaisFrequente = encontrarNotaMaisFrequente(frequencia, 1, 0);

        printf("%.1f\n", (float)notaMaisFrequente);

        return;
    }

    char respostas[10];

    lerRespostas(respostas, 0);

    int nota = calcularNota(gabarito, respostas, 0, 0);

    printf("%d %.1f\n", numero, (float)nota);

    frequencia[nota]++;

    if (nota >= 6)
    {
        aprovados++;
    }

    processarAlunos(gabarito, total + 1, aprovados, frequencia);
}

int main()
{
    char gabarito[10];
    lerRespostas(gabarito, 0);

    int frequencia[11] = {0};
    processarAlunos(gabarito, 0, 0, frequencia);

    return 0;
}