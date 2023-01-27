#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    printf("Input n = ");
    scanf("%lld", &n);
    long long npow = n * n;

    int length = 0;
    int i = n;
    while (1)
    {
        if (i <= 0)
            break;
        i = i / 10;
        length++;
    }

    printf("n^2 = %lld\n", npow);
    if (npow % (int) pow(10, length) == n)
    {
        printf("Yes. %lld is automorphic number.", n);
    }
    else
    {
        printf("No. %lld is not automorphic number.", n);
    }
    return 0;
}