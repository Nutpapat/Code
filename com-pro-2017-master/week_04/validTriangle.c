/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
        printf("Triangle is valid.\n");
    else
        printf("Triangle is not valid.\n");

    return 0;
}
