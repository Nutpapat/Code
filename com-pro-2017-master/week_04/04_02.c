/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

#define swap(a, b){\
    a = a + b;\
    b = a - b;\
    a = a - b;\
}

int main() {
    /* Main function */
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (b > a) swap(a, b);
    if (c > b) swap(b, c);
    if (b > a) swap(a, b);

    printf("%.2lf\n", b);

    return 0;
}
