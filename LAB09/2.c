#include <stdio.h>



DayOfWeek findDayOfWeek(int day, int month) {

}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case
: printf("Sunday.\n"); break;
		case
: printf("Monday.\n"); break;
		case
: printf("Tuesday.\n"); break;
		case
: printf("Wednesday.\n"); break;
		case
: printf("Thursday.\n"); break;
		case
: printf("Friday.\n"); break;
		case
: printf("Saturday.\n"); break;
	}
}
