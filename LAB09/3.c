#include <stdio.h>
#include <stdlib.h>

struct Point {
    double X;
    double Y;
};

int main() {
    int amount;
    printf("Number of Points: ");
    scanf("%d" , &amount);

    struct Point *points = (struct Point *)malloc(sizeof(struct Point) * amount);
    
    
    for(int i = 0 ; i < amount; i++) {
        printf("P%d.X: " , i + 1);
        scanf("%lf" , &points[i].X);
        printf("P%d.Y: " , i + 1);
        scanf("%lf" , &points[i].Y);
    }
    
    return 0;
}