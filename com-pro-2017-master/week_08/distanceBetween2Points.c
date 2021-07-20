/*
Computer Programming - Week 08
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double calculateDistance(Point p1, Point p2);

int main() {
    /* Main function */
    Point p1, p2;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf\n", calculateDistance(p1, p2));

    return 0;
}

double calculateDistance(Point p1, Point p2) {
    /* Calculate distance between 2 points */
    return sqrt(pow(fabs(p1.x-p2.x), 2) + pow(fabs(p1.y-p2.y), 2));
}
