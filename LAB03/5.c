#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getAmount[28];
    fgets(getAmount, 28, stdin);
    int amount = atoi(getAmount);

    if (amount <= 0 || amount > 26)
    {
        printf("-");
    }
    else
    {
        for (int i = amount - 1; i > 0; i--)
        {
            int code = (char)97 + i;
            printf("%c", code);
            printf("-");
        }
        printf("a");
        for (int i = 1; i < amount; i++)
        {
            printf("-");
            int code = (char)97 + i;
            printf("%c", code);
        }
    }
    return 0;
}