/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    double price;
    int discount, amount;
    scanf("%lf %i %i", &price, &discount, &amount);

    double price_a = price * ((amount - amount % 3) * 2 / 3 + amount % 3);
    double price_b = price * amount * (100 - discount) / 100;

    if (price_a < price_b)
        printf("Buy 2 Get 1\n%.2f\n", price_a);
    else
        printf("Discount %i%%\n%.2f\n", discount, price_b);

    return 0;
}
