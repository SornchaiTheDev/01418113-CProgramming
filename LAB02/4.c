#include <stdio.h>
#include <stdlib.h>

int main()
{
    char getSalary[20];

    fgets(getSalary, 20, stdin);

    float salary = atof(getSalary);
    float tax = 0.00;
    if (salary < 0)
    {
        printf("Error: Salary must be greater or equal to 0");
        return 0;
    }
    if (salary <= 300000)
    {
        tax = salary * (5.0 / 100.0);
    }
    else
    {
        tax = 300000 * (5.0 / 100.0);
        tax += (salary - 300000) * (10.0 / 100.0);
    }
    printf("%.2f", tax);

    return 0;
}