#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    // generate array 1 to numPrisoners
    for (i = 0; i < numPrisoners; i++)
    {
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %d\n", (int)&prisoners[0]);
    // printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

    // Select prisoner to be killed
    // killed[0] = prisoners[2];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[2]);
    // killed[1] = prisoners[5];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[5]);
    // killed[2] = prisoners[8];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[8]);
    // killed[3] = prisoners[1];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[1]);
    // killed[4] = prisoners[6];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[6]);
    // killed[5] = prisoners[0];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[0]);
    // killed[6] = prisoners[7];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[7]);
    // killed[7] = prisoners[4];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[4]);
    // killed[8] = prisoners[9];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[9]);
    // killed[9] = prisoners[3];
    // removeKilled(&prisoners[0], numPrisoners, prisoners[3]);

    for (i = 0; i < numPrisoners; i++)
    {
        int j = 0;
        int count = 0;
        while (1)
        {
            // printf("j : %d\n", (j % numPrisoners) - 1);
            if (prisoners[j] == 0)
            {
                count++;
                j += m;
                continue;
            }
            // if ((j % numPrisoners) - 1 >= 0 && prisoners[(j % numPrisoners) - 1] == 0)
            // {
            //     count++;
            //     // j++;
            //     printf("prisoner : %d\n", prisoners[(j % numPrisoners) - 1]);
            //     continue;
            // }
            // killerPtr = &prisoners[(j % numPrisoners) - 1];
            if (j > numPrisoners)
            {
                printf("j :%d\n", j);
                killerPtr = &prisoners[(j % numPrisoners) - 1];
            }
            else
            {
                killerPtr = &prisoners[j];
            }
            break;
        }

        // append number of prisoner who is killed to array `killed`
        killed[i] = *killerPtr;

        // remove number killed prisoner from array `prisoners`
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);
    }

    for (i = 0; i < numPrisoners; i++)
    {
        printf("%d ", killed[i]);
    }

    return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    array[killedPrisoner - 1] = 0;
    // for (int i = killedPrisoner - 1; i < size; i++)
    // {
    //     if (i == )
    //     {
    //         array[i] = array[i + 1];
    //         continue;
    //     }

    //     array[i] = 0;
    // }
}

/**
 *
 * 3
 * 2
 *
 * 1 2 3
 *
 * 2
 *
 * 1 0 3
 *
 * 2 1
 *
 * 0 0 3
 *
 * 2 1 3
 *
 * 0 0 0
 */