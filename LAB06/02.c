#include <stdio.h>

int main()
{
    int subjects = 0, sumUnit = 0;
    float sumGrade = 0;
    printf("Enter number of subject(s): ");
    scanf("%d", &subjects);
    for (int i = 1; i <= subjects; i++)
    {
        int unit;
        char grade;
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("\n%d,%c", &unit, &grade);
        sumUnit += unit;
        if (grade == 'a' || grade == 'A')
        {
            sumGrade += 4 * unit;
        }
        else if (grade == 'b' || grade == 'B')
        {
            sumGrade += 3 * unit;
        }
        else if (grade == 'c' || grade == 'C')
        {
            sumGrade += 2 * unit;
        }
        else if (grade == 'd' || grade == 'D')
        {
            sumGrade += 1 * unit;
        }
        else
        {
            sumGrade += 0 * unit;
        }
    }
    float gpax = sumGrade / sumUnit;

    printf("GPA = %.2f", gpax);

    return 0;
}