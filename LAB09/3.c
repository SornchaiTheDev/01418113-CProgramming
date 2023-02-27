#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
    double X;
    double Y;
};

int main()
{
    int amount;
    printf("Number of Points: ");
    scanf("%d", &amount);

    struct Point *points = (struct Point *)malloc(sizeof(struct Point) * amount);

    for (int i = 0; i < amount; i++)
    {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].X);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].Y);
    }
    printf("Length:\n");
    for (int i = 0; i < amount - 1; i++)
    {
        double distance = sqrt(pow((points[i + 1].X - points[i].X), 2) + pow((points[i + 1].Y - points[i].Y), 2));

        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i + 1, points[i].X, points[i].Y, i + 2, points[i + 1].X, points[i + 1].Y, distance);
    }
    return 0;
}