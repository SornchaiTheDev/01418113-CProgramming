#include <stdio.h>
#define ARRAY_SIZE 98

int main()
{
    int i, j;
    int A[ARRAY_SIZE] = {0};

    for (i = 2; i < ARRAY_SIZE; i++)
        A[i] = 1;

    for (
        j = 4; j < ARRAY_SIZE; j++)
    {
        for (int k = 2; k < j; k++)
        {
            if (j % k == 0)
            {
                A[j] = 0;
                break;
            }
        }
    }

    for (i = 2; i < ARRAY_SIZE; i++)

        if (A[i] == 1)

            printf("%d ",
                   i);

    printf("\n");

    return 0;
}