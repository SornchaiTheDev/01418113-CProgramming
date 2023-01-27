#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getHeight[6];
    fgets(getHeight, 6, stdin);
    int height = atoi(getHeight);
    int base = (2 * height) - 1;
    int i, j, k;
    for (i = 0; i <= base / 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (k = base / 2 - 1; k >= 0; k--)
    {
        for (j = 0; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}