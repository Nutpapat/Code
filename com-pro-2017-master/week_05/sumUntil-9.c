/*
Computer Programming - Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num, total = 0;

    while (1) {
        scanf("%i", &num);
        if (num == -9) {
            break;
        }
        total += num;
    }

    printf("%i\n", total);

    return 0;
}
