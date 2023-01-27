#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getX[10], getY[10];

    fgets(getX, 10, stdin);
    fgets(getY, 10, stdin);

    int x = atoi(getX);
    int y = atoi(getY);
    int i, j, k;
    for (j = 1; j <= y; j++)
    {
        for (k = 1; k != j; k++)
        {
            printf(" ");
        }

        for (i = 0; i < x; i++)
        {
            if (j > 1 && j < y && i > 0 && i < x - 1)
            {
                printf(" ");
                continue;
            };
            printf("*");
        }
        if (j < y)
            printf("\n");
    }

    return 0;
}
