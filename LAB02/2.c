#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stickers[10], price[10];

    fgets(stickers, 10, stdin);
    fgets(price, 10, stdin);

    int discount = 0;
    int stickersAmount = atoi(stickers);
    double priceDouble = atof(price);

    if (stickersAmount > 0)
    {
        if (stickersAmount == 1)
        {
            discount = 10;
            stickersAmount -= 1;
        }
        if (stickersAmount == 2)
        {
            discount = 15;
            stickersAmount -= 2;
        }
        if (stickersAmount >= 3 && stickersAmount < 6)
        {
            discount = 20;
            stickersAmount -= 3;
        }
        if (stickersAmount >= 6 && stickersAmount < 9)
        {
            discount = 30;
            stickersAmount -= 6;
        }
        if (stickersAmount >= 9)
        {
            discount = 40;
            stickersAmount -= 9;
        }
    }

    printf("You get %d percents discount.\n", discount);
    double total = priceDouble * (100.0 - discount) / 100.0;
    printf("Total amount due is %.2f Baht.\n", total);
    printf("And you have %d stickers left.", stickersAmount);

    return 0;
}