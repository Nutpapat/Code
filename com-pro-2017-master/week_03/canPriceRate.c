/*
Computer Programming - Lab Week 03
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#define pi 3.14159265359

int main() {
    /* Main function */
    double price, diameter, height;
    scanf("%lf %lf %lf", &price, &diameter, &height);

    double volume = height*(diameter/2)*(diameter/2)*pi;
    double ratio = price/(height*(diameter/2)*(diameter/2)*pi);

    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf\n", ratio);

    return 0;
}
