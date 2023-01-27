#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getFirst[12], getSecond[12];
    fgets(getFirst, 12, stdin);
    fgets(getSecond, 12, stdin);
    long long first = atoll(getFirst);
    long long second = atoll(getSecond);
    long long lcm = first * second;

    if (first < second)
    {
        long long saved = first;
        first = second;
        second = saved;
    }

    while (1)
    {
        if (second == 0)
            break;
        long long result = first % second;
        first = second;
        second = result;
    }

    printf("GCD : %lld\n", first);
    printf("LCM : %lld", lcm / first);

    return 0;
}