#include <stdio.h>
#include <stdlib.h>

void toBin(int dec) {
    if(dec >> 1) {
        toBin(dec >> 1);
    }
    printf("%d" , dec & 1);
}

int main()
{
    char getDec[10];
    fgets(getDec, 10, stdin);
    int dec = atoi(getDec);
    toBin(dec);
    return 0;
}

