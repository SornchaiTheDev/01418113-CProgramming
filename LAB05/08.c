#include <stdio.h>

int main()
{
    int stairs, i, step = 0;
    printf("Input number of stairs: ");
    scanf("%d", &stairs);
    int round = 1;

    while (1)
    {
        printf("---- round %d ----\n", round);
        for (i = 0; i < stairs; i++)
        {

            if (i == stairs - step - 2)
            {
                printf("|-O-|\n");
            }
            else if (i == stairs - step - 1)
            {
                printf("|-^-|\n");
            }
            else
            {
                printf("|---|\n");
            }
        }
        int _step;
        printf("Input step command: ");
        scanf("%d", &_step);
        step += _step;
        if (step >= stairs - 2)
        {
            if (_step > 0)
            {
                step = stairs - 2;
            }
        }
        else if (step <= 0)
        {
            step = 0;
        }

        if (_step == 0)
        {
            break;
        }

        round++;
    }
}