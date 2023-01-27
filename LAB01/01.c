#include <stdio.h>

int main()
{
    int computer_time = 785;
    int days = computer_time / 1440;
    int remainMinutes = computer_time - (days * 1440);
    int hours = remainMinutes / 60 % 60;
    int minutes = remainMinutes % 60;
    

    printf("It is %d days %d hours and %d minutes.", days, hours, minutes);

    return 0;
}