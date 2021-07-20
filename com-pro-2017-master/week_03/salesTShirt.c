/*
Computer Programming - Lab Week 03
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    double price, discount;
    int amount;
    scanf("%lf %lf %i", &price, &discount, &amount);

    printf("%.2f\n", (price*amount)*(1-discount*0.01));

    return 0;
}
