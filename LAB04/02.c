#include <stdio.h>
#include <stdlib.h>

int is_prime(int i)
{
    int count = 0;
    for (int j = 2; j <= i; j++)
    {
        if (i % j == 0)
        {

            count += 1;
        }
    }

    if (count > 1)
    {

        return 0;
    }
    return 1;
}

int main()
{
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}