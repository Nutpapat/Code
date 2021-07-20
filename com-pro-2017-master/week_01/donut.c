/*
Computer Programming - Lab Week 01
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#define pi 3.14159

float cal_area(int diameter);
float cal_circ(int diameter);

int main() {
    /* Main function */
    int d_big, d_small;
    scanf("%i %i", &d_big, &d_small);

    float area = cal_area(d_big) - cal_area(d_small);
    float circ = cal_circ(d_big) + cal_circ(d_small);

    printf("%.4f\n%.4f", area, circ);

    return 0;
}

float cal_area(int diameter) {
    /* Calculate circle area */
    float radius = (float)diameter/2;
    float area = pi * radius * radius;
    return area;
}

float cal_circ(int diameter) {
    /* Calculate circle circumference */
    float radius = (float)diameter/2;
    float circumference = pi * radius * 2;
    return circumference;
}
