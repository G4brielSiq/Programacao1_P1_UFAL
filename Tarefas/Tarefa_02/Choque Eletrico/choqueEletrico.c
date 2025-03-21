#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int level;

    scanf("%d", &level);

    if(level >= 1 && level <= 20)
    {
        level = (pow(level, 3)) + 20;
        printf("Potencia de : %d W", level);
    }

    else if(level >= 21 && level <= 40)
    {
        level = 8000 + (pow((level - 10), 2));
        printf("Potencia de : %d W", level);
    }

    else if(level >= 41 && level <= 60)
    {
        level = 9000 + (5 * level);
        printf("Potencia de : %d W", level);
    }

    else if(level >= 61 && level <= 80)
    {
        level = 9300 + (2 * level);
        printf("Potencia de : %d W", level);
    }

    else if(level >= 81 && level <= 100)
    {
        level = 9500 + level;
        printf("Potencia de : %d W", level);
    }

    return 0;
}