/*
Computer Programming - Lab Week 01
Teerapat Kraisrisirikul (60070183)
*/

// NOTES: Money amounts are still unsure.

#include <stdio.h>

int main () {
    /* Main function */
    int amount, pay;
    scanf("%i", &amount);

    if (amount < 15) {
        pay = amount * 240;
    }
    else if (amount == 15) {
        pay = amount * 360;
    }
    else {
        pay = amount * 480;
    }

    printf("%i\n", pay);

    return 0;
}
