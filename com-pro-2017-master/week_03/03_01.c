/*
Computer Programming - Lab Week 03
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    float num_f1 = 123.930035;
    float num_f2 = 124.93012345623;

    double num_d1 = 456.123001;
    double num_d2 = 457.123023456781234121212;

    float num_f3 = 34.0000005;
    double num_d3 = 34.0000005;

    printf("Float1: %f\n", num_f1);
    printf("Float2: %f\n", num_f2);

    printf("Double1: %lf\n", num_d1);
    printf("Double2: %lf\n", num_d2);

    float result_float = num_f3 + num_f3;
    printf("Result float: %f\n", result_float);

    double result_double = num_d3 + num_d3;
    printf("Result double: %lf\n", result_double);

    return 0;
}
