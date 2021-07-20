/*
Matrix Library
by Teerapat K.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double det(double **matrix, int size);
double minor(double **matrix, int select_i, int select_j, int size);
double cofactor(double **matrix, int select_i, int select_j, int size);
void transpose(double **matrix, int size);
void adj(double **matrix, int size);
void inverse(double **matrix, int size);
void multiply(double **matrix_result, double **matrix_a, double **matrix_b, int size_i, int size_ij, int size_j);
double mul(double **matrix_a, double **matrix_b, int select_i, int select_j, int size);

double det(double **matrix, int size) {
    /* Find Determinant */
    double result = 0;
    if (size == 1)
        result = matrix[0][0];
    else if (size == 2)
        result = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    else if (size == 3)
        result = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
                 (matrix[1][0] * matrix[2][1] * matrix[0][2]) +
                 (matrix[0][1] * matrix[1][2] * matrix[2][0]) -
                 (matrix[0][2] * matrix[1][1] * matrix[2][0]) -
                 (matrix[2][1] * matrix[1][2] * matrix[0][0]) -
                 (matrix[0][1] * matrix[1][0] * matrix[2][2]);
    else
        for (int j = 0; j < size; j++)
            result += matrix[0][j] * cofactor(matrix, 0, j, size);

    return result;
}

double minor(double **matrix, int select_i, int select_j, int size) {
    /* Find minor */
    double *matrix_small[size-1];
    for (int i = 0; i < size; i++)
        matrix_small[i] = (double*)malloc((size)*sizeof(double));

    int i_small = 0, j_small = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i != select_i) && (j != select_j)) {
                matrix_small[i_small][j_small] = matrix[i][j];
                j_small += 1;
                if (j_small == size-1) {
                    j_small = 0;
                    i_small += 1;
                }
            }
        }
    }

    return det(matrix_small, size-1);
}

double cofactor(double **matrix, int select_i, int select_j, int size) {
    /* Find cofactor */
    return (pow((-1), select_i+select_j)*minor(matrix, select_i, select_j, size));
}

void transpose(double **matrix, int size_i, int size_j) {
    /* Transpose the matrix */
    // Create temporary matrix
    double *temp[size_i];
    for (int i = 0; i < size_i; i++)
        temp[i] = (double*)malloc((size_j+1)*sizeof(double));

    // Set values for temporary matrix
    for (int i = 0; i < size_i; i++)
        for (int j = 0; j < size_j; j++)
            temp[i][j] = matrix[i][j];

    // Free Memory for the original matrix
    for (int i = 0; i < size_i; i++)
        free(matrix[i]);

    // Memory Allocation for the original matrix (New size)
    for (int i = 0; i < size_j; i++)
        matrix[i] = (double*)malloc((size_i+1)*sizeof(double));

    // Set values for transposed matrix
    for (int i = 0; i < size_j; i++)
        for (int j = 0; j < size_i; j++)
            matrix[i][j] = temp[j][i];
}

void adj(double **matrix, int size) {
    /* Adjoint the matrix */
    // Create temporary matrix
    double *temp[size];
    for (int i = 0; i < size; i++)
        temp[i] = (double*)malloc((size+1)*sizeof(double));

    // Set values for temporary matrix
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            temp[i][j] = matrix[i][j];

    // Set values for adjoint matrix (unfinished)
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            matrix[i][j] = cofactor(temp, i, j, size);

    // Transpose the adjoint matrix (final)
    transpose(matrix, size);
}

void inverse(double **matrix, int size) {
    /* Inverse the matrix */
    double det_value = det(matrix, size); // Save determinant value
    adj(matrix, size);

    // Divide determinant value to all values in the matrix to get inverse
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] /= det_value;
            if (matrix[i][j] == -0)
                matrix[i][j] = 0;
        }
    }
}

void multiply(double **matrix_result, double **matrix_a, double **matrix_b, int size_i, int size_ij, int size_j) {
    /* Full matrices multiply */
    for (int i = 0; i < size_i; i++)
        for (int j = 0; j < size_j; j++)
            matrix_result[i][j] = mul(matrix_a, matrix_b, i, j, size_ij);
}

double mul(double **matrix_a, double **matrix_b, int select_i, int select_j, int size) {
    /* Multiply matrix a's row with matrice b's column */
    double result = 0;

    // Calculate Result
    for (int i = 0; i < size; i++)
        result += (matrix_a[select_i][i] * matrix_b[i][select_j]);

    return result;
}
