#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getInt[6];
    fgets(getInt, 6, stdin);

    int amount = atoi(getInt);

    while (amount >= 0)
    {
        printf("%d\n", amount);
        amount--;
    }
    return 0;
}