#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);

    if (x == 0 && y == 0)
    {
        printf("Center");
    }
    else if (x == 0)
    {
        if (y > 0)
        {
            printf("North");
        }
        else
        {
            printf("South");
        }
    }
    else if (x > 0)
    {
        if (y == 0)
        {
            printf("East");
        }
        else if (y > 0)
        {
            printf("North-east");
        }
        else
        {
            printf("South-east");
        }
    }
    else if (x < 0)
    {
        if (y == 0)
        {
            printf("West");
        }
        else if (y > 0)
        {
            printf("North-west");
        }
        else
        {
            printf("South-west");
        }
    }
    return 0;
}