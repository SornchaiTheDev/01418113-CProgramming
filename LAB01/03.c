#include <stdio.h>
int main()
{

    float preGrade = 1.5;

    int preCredit = 21;

    int credit = 19;

    float requiredGrade = 4.00;
    float gpa;
    
    gpa = ((requiredGrade * (preCredit + credit)) - (preGrade * preCredit)) / credit;

    if(gpa > 4.00)


    printf("The GPA this semester should be %.2f", gpa);

    return 0;
}