#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int height = 2 * n - 1;
    int half = height / 2;
    for (i = 0; i < height; i++)
    {

        int size;
        if (i < half)
            size = i;
        else
            size = height - i - 1;
        for (j = 0; j <= size; j++)
        {
            if (j % 2)
            {
                printf("x");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
    }
    return 0;
}