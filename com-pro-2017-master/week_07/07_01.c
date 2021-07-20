/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int getnum();
int sqr(int x);
int printone(int x);

int main() {
    /* Main function */
    printone(sqr(getnum()));
    return 0;
}

int getnum() {
    /* Get number */
    int numIn;
    scanf("%i", &numIn);
    return numIn;
}

int sqr(int x) {
    /* Returns the square of 'x' */
    return x*x;
}

int printone(int x) {
    /* Print one integer */
    printf("The value is: %i\n", x);
    return 0;
}
