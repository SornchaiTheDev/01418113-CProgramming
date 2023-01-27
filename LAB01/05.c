#include <stdio.h>

int main()
{
    int amount = 50;
    int fifty = amount / 50;
    amount -= fifty * 50;
    int twenty = amount / 20;
    amount -= twenty * 20;
    int five = amount / 5;
    amount -= five * 5;

    printf("1: %d\n", amount);
    printf("5: %d\n", five);
    printf("20: %d\n", twenty);
    printf("50: %d\n", fifty);

    return 0;
}