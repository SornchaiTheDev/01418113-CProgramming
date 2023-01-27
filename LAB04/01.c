#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getDec[4];
    fgets(getDec, 4, stdin);
    int bin = atoi(getDec);
    printf("Binary number of %d is ", bin);
    printf("%d", (bin & 8) / 8);
    printf("%d", (bin & 4) / 4);
    printf("%d", (bin & 2) / 2);
    printf("%d.", bin & 1);
    return 0;
}
