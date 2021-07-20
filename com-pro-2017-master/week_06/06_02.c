/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <stdlib.h>

double multiply(double **matrix_a, double **matrix_b, int select_i, int select_j);

int main() {
    /* Main function */
    double *matrix_a[3], *matrix_b[3];

    // Memory Allocation
    for (int i = 0; i < 3; i++) {
        matrix_a[i] = (double*)malloc(4*sizeof(double));
        matrix_b[i] = (double*)malloc(4*sizeof(double));
    }

    // Input values of matrix a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix_a[i][j]);
        }
    }

    // Input values of matrix b
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix_b[i][j]);
        }
    }

    // Calculate and output
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", multiply(matrix_a, matrix_b, i, j));
        }
        printf("\n");
    }

    return 0;
}

double multiply(double **matrix_a, double **matrix_b, int select_i, int select_j) {
    /* Multiply matrix a row with matrix b column */
    double result = 0;
    for (int i = 0; i < 3; i++) {
        result += matrix_a[select_i][i] * matrix_b[i][select_j];
    }

    return result;
}
