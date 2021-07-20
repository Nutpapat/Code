/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <math.h>

double perimeter(double a, double b);
double area(double a, double b);

int main() {
    /* Main function */
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("Perimeter: %.2lf\n", perimeter(a, b));
    printf("Area: %.2lf\n", area(a, b));

    return 0;
}

double perimeter(double a, double b) {
    /* Get perimeter of the right triangle */
    return a + b + sqrt(a*a+b*b);
}

double area(double a, double b) {
    /* Get area of the right triangle */
    return (a * b)/2;
}
