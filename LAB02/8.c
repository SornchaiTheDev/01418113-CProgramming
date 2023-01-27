#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    char getSize[3], getPepperoni[3], getCheese[3], getMushroom[3];
    puts("Welcome to My Pizza Shop!!");
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(getSize, 3, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(getPepperoni, 3, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(getCheese, 3, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(getMushroom, 3, stdin);
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    int size = atoi(getSize);
    int pepperoni = atoi(getPepperoni);
    int cheese = atoi(getCheese);
    int mushroom = atoi(getMushroom);

    int diameter = 0;

    if (size == 1)
        diameter = 10;
    else if (size == 2)
        diameter = 16;
    else if (size == 3)
        diameter = 20;

    float extraCost = 0;

    if (pepperoni == 1)
        extraCost += 0.5;
    if (cheese == 1)
        extraCost += 0.25;
    if (mushroom == 1)
        extraCost += 0.30;

    int fixedCost = 5;
    int baseCost = 2;
    float area = M_PI * pow(diameter, 2) / 4;
    float cost = fixedCost + (baseCost * area) + (extraCost * area);
    float price = 1.5 * cost;

    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");

    return 0;
}