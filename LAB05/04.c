#include <stdio.h>

int main()
{
    int n;
    long double result = 0.0000000000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long double divide = 2 * i + 1;
        if (i % 2)
        {
            result -= 4 / divide;
        }
        else
        {
            result += 4 / divide;
        }
    }
    printf("%.10Lf", result);
    return 0;
}