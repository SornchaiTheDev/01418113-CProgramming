#include <stdio.h>

#define ARRAY_SIZE 5

typedef struct
{
    char id[12];
    int midterm;
    int final;
    char grade;
} StudentRecord;

void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin)
{

    int maxMidterm = 0, maxFinal = 0;

    for (int i = 0; i < size; i++)
    {
        if (pRec[i].midterm > maxMidterm)
        {
            maxMidterm = pRec[i].midterm;
            *topMid = &pRec[i];
        }
        if (pRec[i].final > maxFinal)
        {
            maxFinal = pRec[i].final;
            *topFin = &pRec[i];
        }
    }
}

int main()
{

    StudentRecord students[ARRAY_SIZE], *pTopMid, *pTopFin;
    int gradeCount[5] = {0};
    int i;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    findTop(students, ARRAY_SIZE, &pTopMid, &pTopFin);

    // print grade
    printf("Top Score for Midterm:\n");
    printf("Student ID %s with score %d\n", pTopMid->id, pTopMid->midterm);
    printf("Top Score for Final:\n");
    printf("Student ID %s with score %d\n", pTopFin->id, pTopFin->final);

    return 0;
}