/*
C Programming Practice - Inverse Matrix
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double det(double **matrix, int size);
double minor(double **matrix, int select_i, int select_j);
double cofactor(double **matrix, int select_i, int select_j);

int main() {
    /* Main function */
    int size; printf("Matrix size (2 or 3): "); scanf("%i", &size);
    double *matrix[size], *inverse[size];

    // Memory Allocation
    for (int i = 0; i < size; i++) {
        matrix[i] = (double*)malloc((size+1)*sizeof(double));
        inverse[i] = (double*)malloc((size+1)*sizeof(double));
    }

    // Matrix Input
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Matrix Inverse Calculation
    if (size == 3) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                inverse[j][i] = (cofactor(matrix, i, j) / det(matrix, size));
            }
        }
    }
    else if (size == 2) {
        inverse[0][0] = matrix[1][1] / det(matrix, size);
        inverse[0][1] = (matrix[0][1] * (-1)) / det(matrix, size);
        inverse[1][0] = (matrix[1][0] * (-1)) / det(matrix, size);
        inverse[1][1] = matrix[0][0] / det(matrix, size);
    }

    // Inverse Output
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%g\t", inverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}

double det(double **matrix, int size) {
    /* Find Determinant */
    double result = 0;
    if (size == 3) {
        result = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
                 (matrix[1][0] * matrix[2][1] * matrix[0][2]) +
                 (matrix[0][1] * matrix[1][2] * matrix[2][0]) -
                 (matrix[0][2] * matrix[1][1] * matrix[2][0]) -
                 (matrix[2][1] * matrix[1][2] * matrix[0][0]) -
                 (matrix[0][1] * matrix[1][0] * matrix[2][2]);
    }
    else if (size == 2) {
        result = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    return result;
}

double minor(double **matrix, int select_i, int select_j) {
    /* Find Minor (Only valid for 3*3 matrix) */
    // Memory Allocation
    double *matrix_small[2];
    for (int i = 0; i < 2; i++) {
        matrix_small[i] = (double*)malloc(3*sizeof(double));
    }

    // Getting values for small matrix
    double temp[4];
    int x = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i != select_i) && (j != select_j)) {
                temp[x] = matrix[i][j];
                x++;
            }
        }
    }

    // Set values for small matrix
    matrix_small[0][0] = temp[0];
    matrix_small[0][1] = temp[1];
    matrix_small[1][0] = temp[2];
    matrix_small[1][1] = temp[3];

    return det(matrix_small, 2);
}

double cofactor(double **matrix, int select_i, int select_j) {
    /* Find Cofactor (Only valid for 3*3 matrix) */
    return (minor(matrix, select_i, select_j) * pow(-1, select_i + select_j));
}
