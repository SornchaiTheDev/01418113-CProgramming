/**
 * height = 2n-1
 * top = height / 2
 */

// ----c----    ccccccccc
// --c-b-c--    ccccccccc
// c-b-a-b-c    ccccccccc
// --c-b-c--    ccccccccc
// ----c----    ccccccccc

#include <stdio.h>
#include <stdlib.h>

void createString(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%c", i);
    }
}

int main()
{
    char getSize[10];
    fgets(getSize, 10, stdin);
    int size = atoi(getSize);

    if (size <= 0 || size > 26)
    {
        printf("-");
    }
    else
    {
        int i, j, k;
        int height = (2 * size) - 1;
        int width = (3 * size);
        printf("half : %d\n", width / 2);
        for (i = 0; i < height; i++)
        {
            for (j = 0; j < width; j++)
            {
                int half = width / 2;

                if (j >= half - 0 && j <= half + 0)
                {
                    printf("%c", 96 + size);
                    continue;
                }

                printf("-");
                // printf("%d", j);
            }
            printf("\n");
        }
    }
    return 0;
}
