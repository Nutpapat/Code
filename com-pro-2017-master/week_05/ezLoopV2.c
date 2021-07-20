/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;

    while (1) {
        scanf("%i", &num);
        if ((num % 2 == 1) || (num % 2 == 0 && num < 2)) {
            printf("error\n");
            continue;
        }
        for (int i = 1; i <= num/2; i++) {
            printf("%i", i);
        }
        for (int i = num/2; i >= 1; i--) {
            printf("%i", i);
        }
        break;
    }

    printf("\n");

    return 0;
}
