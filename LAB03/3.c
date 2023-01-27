#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getFirst[10], getSecond[10];
    fgets(getFirst, 10, stdin);
    fgets(getSecond, 10, stdin);

    int first = atoi(getFirst);
    int second = atoi(getSecond);
    int GCD = 1;
    int i = 2;
    int firstGCD = first;
    int secondGCD = second;
    if (firstGCD < second)
    {
        int saved = firstGCD;
        firstGCD = secondGCD;
        secondGCD = saved;
    }

    while (1)
    {
        if (secondGCD == 0)
        {

            GCD = firstGCD;
            break;
        }
        int result = firstGCD % secondGCD;
        firstGCD = secondGCD;
        secondGCD = result;
    }

    first /= GCD;
    second /= GCD;

    if (second != 1)
    {

        printf("= %d/%d", first, second);
    }
    else
    {
        printf("= %d", first);
    }
    return 0;
}