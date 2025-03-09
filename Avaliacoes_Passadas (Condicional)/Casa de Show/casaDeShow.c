#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Pedro, Tulio, Gabriel, Yanka, Paloma, Vinicius, Elias;

    scanf("%d%d%d%d%d%d%d", &Pedro, &Tulio, &Gabriel, &Yanka, &Paloma, &Vinicius, &Elias);

    int drPedro = (Pedro - (7400));
    int drTulio = (Tulio - (4400));
    int drGabriel = (Gabriel - (5200));
    int drYanka = (Yanka - (4000));
    int drPaloma = (Paloma - (4400));
    int drVinicius = (Vinicius - (4800));
    int drElias = (Elias - (6600));

    int contBanC1 = 7;
    int contBanC2 = 7;
    int contBanC3 = 7;

    if (drPedro < 100)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nPedro não pode ir para nenhuma casa\n");
    }

    else if (drPedro >= 100)
    {
        //  dc1Pedro 5 * 100;
        //  dc2Pedro 1 * 100;
        //  dc3Pedro 5 * 100;

        if (drPedro >= (5 * 100))
        {
            //printf("\nPedro pode ir para todas as casas\n");
        }

        else if ((drPedro < (5 * 100)) && (drPedro >= (1 * 100)))
        {
            contBanC1 = contBanC1 - 1;
            contBanC3 = contBanC3 - 1;

           //printf("\nPedro pode ir apenas para casa 2\n");
        }
    }

    if (drTulio < 200)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nTulio não pode ir para nenhuma casa\n");
    }

    else if (drTulio >= (2 * 100))
    {
        //  dc1Tulio 2 * 100;
        //  dc2Tulio 4 * 100;
        //  dc3Tulio 8 * 100;

        if (drTulio >= (8 * 100))
        {
            //printf("\nTulio pode ir para todas as casas\n");
        }

        else if ((drTulio < (8 * 100)) && (drTulio >= (4 * 100)))
        {
            contBanC3 = contBanC3 - 1;

            //printf("\nTulio pode ir para casa 1 e 2\n");
        }

        else if ((drTulio < (4 * 100)) && (drTulio >= (2 * 100)))
        {
            contBanC2 = contBanC2 - 1;
            contBanC3 = contBanC3 - 1;

            //printf("\nTulio pode ir apenas para casa 1\n");
        }
    }

    if (drGabriel < 200)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nGabriel não pode ir para nenhuma casa\n");
    }

    else if (drGabriel >= (2 * 100))
    {
        //  dc1Gabriel 2 * 100;
        //  dc2Gabriel 6 * 100;
        //  dc3Gabriel 10 * 100;

        if (drGabriel >= (10 * 100))
        {
            //printf("\nGabriel pode ir para todas as casas\n");
        }

        else if ((drGabriel < (10 * 100)) && (drGabriel >= (6 * 100)))
        {
            contBanC3 = contBanC3 - 1;

            //printf("\nGabriel pode ir para casa 1 e 2\n");
        }

        else if ((drGabriel < (6 * 100)) && (drGabriel >= (2 * 100)))
        {
            contBanC2 = contBanC2 - 1;
            contBanC3 = contBanC3 - 1;

            //printf("\nGabriel pode ir para casa 1\n");
        }
    }

    if (drYanka < 200)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nYanka não pode ir para nenhuma casa\n");
    }

    else if (drYanka >= (2 * 100))
    {
        //  dc1Yanka 2 * 100;
        //  dc2Yanka 4 * 100;
        //  dc3Yanka 6 * 100;

        if (drYanka >= (6 * 100))
        {
            //printf("\nYanka pode ir para todas as casas\n");
        }

        else if ((drYanka < (6 * 100)) && (drYanka >= (4 * 100)))
        {
            contBanC3 = contBanC3 - 1;

            //printf("\nYanka pode ir para casa 1 e 2\n");
        }

        else if ((drYanka < (4 * 100)) && (drYanka >= (2 * 100)))
        {
            contBanC2 = contBanC2 - 1;
            contBanC3 = contBanC3 - 1;

            //printf("\nYanka pode ir para casa 1\n");
        }
    }

    if (drPaloma < 200)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nPaloma não pode ir para nenhuma casa\n");
    }

    else if (drPaloma >= (2 * 100))
    {
        //  dc1Paloma 2 * 100;
        //  dc2Paloma 6 * 100;
        //  dc3Paloma 6 * 100;

        if (drPaloma >= (6 * 100))
        {
            //printf("\nPaloma pode ir para todas as casas\n");
        }

        else if ((drPaloma < (6 * 100)) && (drPaloma >= (2 * 100)))
        {
            contBanC2 = contBanC2 - 1;
            contBanC3 = contBanC3 - 1;

            //printf("\nPaloma pode ir apenas para casa 1\n");
        }
    }

    if (drVinicius < 400)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nVinicius não pode ir para nenhuma casa\n");
    }

    else if (drVinicius >= (4 * 100))
    {
        //  dc1Vinicius 4 * 100;
        //  dc2Vinicius 6 * 100;
        //  dc3Vinicius 4 * 100;

        if (drVinicius >= (6 * 100))
        {
            //printf("\nVinicius pode ir para todas as casas\n");
        }

        else if ((drVinicius < (6 * 100)) && (drVinicius >= (4 * 100)))
        {
            contBanC2 = contBanC2 - 1;

            //printf("\nVinicius pode ir para casa 1 e 3\n");
        }
    }

    if (drElias < 500)
    {
        contBanC1 = contBanC1 - 1;
        contBanC2 = contBanC2 - 1;
        contBanC3 = contBanC3 - 1;

        //printf("\nElias não pode ir para nenhuma casa\n");
    }

    else if (drElias >= (5 * 100))
    {
        //  dc1Elias 5 * 100;
        //  dc2Elias 9 * 100;
        //  dc3Elias 5 * 100;

        if (drElias >= (9 * 100))
        {
            //printf("\nElias pode ir para todas as casas\n");
        }

        else if ((drElias < (9 * 100)) && (drElias >= (5 * 100)))
        {
            contBanC2 = contBanC2 - 1;

            //printf("\nElias pode ir para casa 1 e 3\n");
        }
    }

    // Obs: CASA 1 pagará 10 reais por integrante;
    // Obs: CASA 2 pagará 20 reais por integrante;
    // Obs: CASA 3 pagará 30 reais por integrante;

    int pagC1 = (contBanC1 * 10);
    int pagC2 = (contBanC2 * 20);
    int pagC3 = (contBanC3 * 30);

    //printf("\n");

    if ((pagC1 != pagC2) && (pagC1 != pagC3) && (pagC2 != pagC3))
    {
        if ((pagC3 > pagC2) && (pagC3 > pagC1))
        {
            printf("\nCasa 3");
            printf("\n%d", pagC3);
            printf("\n%d", contBanC3);
        }

        else if ((pagC2 > pagC3) && (pagC2 > pagC1))
        {
            printf("Casa 2  a");
            printf("\n%d", pagC2);
            printf("\n%d", contBanC2);
        }

        else if ((pagC1 > pagC3) && (pagC1 > pagC2))
        {
            printf("Casa 1");
            printf("\n%d", pagC1);
            printf("\n%d", contBanC1);
        }
    }

    else if ((pagC1 == pagC2) || (pagC2 == pagC3) || (pagC3 == pagC1))
    {
        if ((pagC1 == pagC2) && (pagC2 == pagC3))
        {
            if ((contBanC1 > contBanC2) && (contBanC1 > contBanC3))
            {
                printf("Casa 1");
                printf("\n%d", pagC1);
                printf("\n%d", contBanC1);
            }

            else if ((contBanC2 > contBanC1) && (contBanC2 > contBanC3))
            {
                printf("Casa 2  b");
                printf("\n%d", pagC2);
                printf("\n%d", contBanC2);
            }

            else if ((contBanC3 > contBanC1) && (contBanC3 > contBanC2))
            {
                printf("Casa 3");
                printf("\n%d", pagC3);
                printf("\n%d", contBanC3);
            }
        }

        else if ((pagC1 == pagC2) && ((pagC1 > pagC3) || (pagC2 > pagC3)))
        {
            if (contBanC1 > contBanC2)
            {
                printf("Casa 1");
                printf("\n%d", pagC1);
                printf("\n%d", contBanC1);
            }

            else if (contBanC2 > contBanC1)
            {
                printf("Casa 2  c");
                printf("\n%d", pagC2);
                printf("\n%d", contBanC2);
            }
        }

        else if ((pagC2 == pagC3) && ((pagC2 > pagC1) || (pagC3 > pagC1)))
        {
            if (contBanC2 > contBanC3)
            {
                printf("Casa 2  d");
                printf("\n%d", pagC2);
                printf("\n%d", contBanC2);
            }

            else if (contBanC3 > contBanC2)
            {
                printf("Casa 3");
                printf("\n%d", pagC3);
                printf("\n%d", contBanC3);
            }
        }

        else if ((pagC3 == pagC1) && ((pagC3 > pagC2) || (pagC1 > pagC2)))
        {
            if (contBanC3 > contBanC1)
            {
                printf("Casa 3");
                printf("\n%d", pagC3);
                printf("\n%d", contBanC3);
            }

            else if (contBanC1 > contBanC3)
            {
                printf("Casa 1");
                printf("\n%d", pagC1);
                printf("\n%d", contBanC1);
            }
        }

        else if ((pagC1 == pagC2) && ((pagC3 > pagC1) || (pagC3 > pagC2)))
        {
            printf("Casa 3");
            printf("\n%d", pagC3);
            printf("\n%d", contBanC3);
        }

        else if ((pagC2 == pagC3) && ((pagC1 > pagC2) || (pagC1 > pagC3)))
        {
            printf("Casa 1");
            printf("\n%d", pagC1);
            printf("\n%d", contBanC1);
        }

        else if ((pagC3 == pagC1) && ((pagC2 > pagC1) || (pagC2 > pagC3)))
        {
            printf("Casa 2  e");
            printf("\n%d", pagC2);
            printf("\n%d", contBanC2);
        }
    }

    return 0;
}