#include <stdio.h>

typedef struct
{
    char id[10];
    int midScore;
    int finalScore;
    char grade;
} Student;

void calculateGrade(Student list[])
{
    for (int i = 0; i < 5; i++)
    {
        int total = list[i].midScore + list[i].finalScore;

        if (total >= 80)
        {
            list[i].grade = 'A';
        }
        else if (total >= 70)
        {
            list[i].grade = 'B';
        }
        else if (total >= 60)
        {
            list[i].grade = 'C';
        }
        else if (total >= 50)
        {
            list[i].grade = 'D';
        }
        else
        {
            list[i].grade = 'F';
        }
    }
}

int main()
{
    Student list[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student ID: ");
        scanf("%s", list[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &list[i].midScore);
        printf("Enter Student Final: ");
        scanf("%d", &list[i].finalScore);
    }

    calculateGrade(list);

    for (int i = 0; i < 5; i++)
    {
        printf("Student ID %s receives grade %c.\n", list[i].id, list[i].grade);
    }
    return 0;
}