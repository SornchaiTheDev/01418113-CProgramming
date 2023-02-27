#include <stdio.h>

double findAverage(char *filename)
{
    FILE *filePtr;
    filePtr = fopen(filename, "r");
    double score, total = 0;
    int count = 0;
    while (fscanf(filePtr, "%lf", &score) == 1)
    {
        total += score;
        count++;
    }

    fclose(filePtr);
    return total / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}