/*
Computer Programming - Lab Week 01
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    // Part I: Arrow Tip
    for (int i = 0; i < num-1; i++) {
        printf(" ");
    }
    printf("*\n");

    // Part II: Arrow Head
    for (int i = 0; i < num-1; i++) {
        // Outer left space
        for (int j = num-i-2; j > 0; j--) {
            printf(" ");
        }
        printf("*");

        // Inner left space
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");

        // Inner right space
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Part III: Arrow Body (2-time loop)
    for (int i = 0; i < 2; i++) {
        // Left space
        for (int j = 0; j < num-1; j++) {
                printf(" ");
            }
        printf("*\n");
    }

    return 0;
}
