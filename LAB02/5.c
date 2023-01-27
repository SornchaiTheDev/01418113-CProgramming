#include <stdio.h>
#include <stdlib.h>

int main()
{
    char _sideA[10], _sideB[10], _sideC[10];

    printf("Enter length of side A: ");
    fgets(_sideA, 10, stdin);
    printf("Enter length of side B: ");
    fgets(_sideB, 10, stdin);
    printf("Enter length of side C: ");
    fgets(_sideC, 10, stdin);

    int intA = atoi(_sideA);
    int intB = atoi(_sideB);
    int intC = atoi(_sideC);

    if (intA + intB > intC && intB + intC > intA && intA + intC > intB)
    {
        if ((intA == intB) && (intA == intC))
        {
            printf("Triangle type is equilateral.");
        }
        else if ((intA == intB && intA != intC) || (intA == intC && intA != intB) || (intB == intC && intB != intA))
        {
            printf("Triangle type is isosceles.");
        }
        else
        {
            printf("Triangle type is scalene.");
        }
    }
    else
    {
        printf("Triangle type is invalid.");
    }

    return 0;
}