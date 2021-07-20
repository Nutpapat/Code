/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int a, b, total = 0;
    scanf("%i", &a);

    while (1) {
        scanf("%i", &b);
        if (b == 0) {
            break;
        }
        total += a % b;
        a = b;
    }

    printf("%i\n", total+1);

    return 0;
}
