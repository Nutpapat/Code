/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int array_m[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int array_n[] = {1, 3, 9, 7, 11, 15, 19};
    int num;

    while (1) {
        scanf("%i", &num);
        if (num < 1 || num > 20) {
            continue;
        }
        for (int i = 0; i < 8; i++) {
            if (array_m[i] == num) {
                printf("%i is in M at index [%i]\n", num, i);
                return 0;
            }
        }
        for (int i = 0; i < 7; i++) {
            if (array_n[i] == num) {
                printf("%i is in N at index [%i]\n", num, i);
                return 0;
            }
        }
        printf("%i is not in neither M nor N\n", num);
        break;
    }

    return 0;
}
