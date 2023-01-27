#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b;
    int ans[3] = {0, 0, 0};
    scanf("%d", &n);

    for (b = 1; b <= n; b++)
    {

        for (a = 1; a <= b; a++)
        {
            int c = n - (a + b);
            if (c > 0)
            {
                if ((a * a) + (b * b) == (c * c))
                {
                    ans[0] = a;
                    ans[1] = b;
                    ans[2] = c;
                    b = n;
                    break;
                }
            }
        }
    }

    if (ans[0] != 0)
    {
        printf("(%d, %d, %d)", ans[0], ans[1], ans[2]);
    }
    else
    {
        printf("No triple found.");
    }
    return 0;
}