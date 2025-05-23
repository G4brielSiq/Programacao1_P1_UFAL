#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

int verificaLinha(int mat[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        int freq[10] = {0};

        for (int j = 0; j < 9; j++)
        {
            int num = mat[i][j];
            if (num < 1 || num > 9 || freq[num])
                return FALSE;
            freq[num] = 1;
        }
    }

    return TRUE;
}

int verificaColuna(int mat[9][9])
{
    for (int j = 0; j < 9; j++)
    {
        int freq[10] = {0};

        for (int i = 0; i < 9; i++)
        {
            int num = mat[i][j];

            if (num < 1 || num > 9 || freq[num])
                return FALSE;
            freq[num] = 1;
        }
    }

    return TRUE;
}

int verificaSubregioes(int mat[9][9])
{
    for (int lin = 0; lin < 9; lin += 3)
    {
        for (int col = 0; col < 9; col += 3)
        {
            int freq[10] = {0};

            for (int i = lin; i < lin + 3; i++)
            {
                for (int j = col; j < col + 3; j++)
                {
                    int num = mat[i][j];

                    if (num < 1 || num > 9 || freq[num])
                        return FALSE;
                    freq[num] = 1;
                }
            }
        }
    }

    return TRUE;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++)
    {
        int mat[9][9];

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        int teste = TRUE;

        if (!verificaLinha(mat))
            teste = FALSE;

        if (!verificaColuna(mat))
            teste = FALSE;

        if (!verificaSubregioes(mat))
            teste = FALSE;

        printf("Instancia %d\n", instancia);
        if (teste)
            printf("SIM\n");

        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}