#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int Fn = ((pow(1 + sqrt(5), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5)));
    return Fn;
}

int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);

    for (i = 0; i <= n; i++)
    {
        printf("F(%d) = %d\n", i, fibo(i));
    }
    return 0;
}
