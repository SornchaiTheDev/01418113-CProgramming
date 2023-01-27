#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = getchar();

    if (c >= 65 && c <= 90)
    {
        printf("Output: upper case");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Output: lower case");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("Output: digit");
    }
    else
    {
        printf("Output: others");
    }

    return 0;
}