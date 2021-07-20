/*
Computer Programming - Lab Week 03
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    long double width, length, perimeter;
    scanf("%Lf %Lf", &width, &length);
    printf("Perimeter of rectangle = %.4Lf units\n", 2*(width + length));

    return 0;
}
