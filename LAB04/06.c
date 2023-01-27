#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getGoal[10];
    printf("Enter your goal amount: ");
    fgets(getGoal, 10, stdin);

    float goal = atof(getGoal);
    float collect = 0;
    int days = 1;
    while (1)
    {
        printf("Enter money collected today: ");
        char getCollect[10];
        fgets(getCollect, 10, stdin);
        collect += atof(getCollect);
        if (collect >= goal)
        {
            printf("Congratulations! You take %d ", days);
            if (days == 1)
            {
                printf("day");
            }
            else
            {
                printf("days");
            }
             printf(" to reach your goal.");
            break;
        }
        else
        {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", days, collect, goal - collect);
            days++;
        }
    }
    return 0;
}