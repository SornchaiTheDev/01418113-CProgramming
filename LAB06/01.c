#include <stdio.h>
int main()
{
    int hour, min;
    char range;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hour, &min, &range);

    if (((range == 'P' || range == 'p') && hour != 12) || ((range == 'A' || range == 'a') && hour >= 12))
    {
        hour += 12;
    }

    printf("Equivalent 24-hour time: %02d:%02d", hour % 24, min);
    return 0;
}