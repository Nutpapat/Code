/*
C Programming Practice - Scaled Matrix
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

float min(float **matrix, int size_i, int size_j);
float max(float **matrix, int size_i, int size_j);

int main() {
    /* Main function */
    // Input matrix size
    int size_i, size_j;
    printf("Column size: "); scanf("%i", &size_i);
    printf("Row size: "); scanf("%i", &size_j);

    float *matrix[size_i];
    for (int i = 0; i < size_i; i++) {
        matrix[i] = (float*)malloc((size_j+1)*sizeof(float));
    }

    // Input values for matrix
    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            scanf(" %f", &matrix[i][j]);
        }
    }

    // Get minimum and maximum values
    float matrix_min = min(matrix, size_i, size_j);
    float matrix_max = max(matrix, size_i, size_j);

    // Scale I: Move minimum to 0
    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            matrix[i][j] -= matrix_min;
        }
    }

    // Scale II: Shrink maximum to 1
    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            matrix[i][j] /= (matrix_max - matrix_min);
        }
    }

    // Show matrix
    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            printf("%g\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

float min(float **matrix, int size_i, int size_j) {
    /* Find minimum value of the matrix */
    float value = matrix[0][0];
    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            if (matrix[i][j] < value) {
                value = matrix[i][j];
            }
        }
    }

    return value;
}

float max(float **matrix, int size_i, int size_j) {
    /* Find maximum value of the matrix */
    float value = matrix[0][0];
    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            if (matrix[i][j] > value) {
                value = matrix[i][j];
            }
        }
    }

    return value;
}
