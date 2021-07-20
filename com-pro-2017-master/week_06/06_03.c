/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    double matrix[3][3];

    // Input values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Checking
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && matrix[i][j] != matrix[0][0]) {
                printf("This is not a scalar matrix\n");
                return 0;
            }
            else if (i != j && matrix[i][j] != 0) {
                printf("This is not a scalar matrix\n");
                return 0;
            }
        }
    }

    printf("This is a scalar matrix\n");

    return 0;
}
