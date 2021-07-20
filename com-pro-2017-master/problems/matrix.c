/*
C Programming Practice - Matrix
Teerapat Kraisrisirikul
*/

#include <stdio.h>

int main() {
    /* Main function */
    int size_i, size_j;
    printf("Column size: "); scanf("%i", &size_i);
    printf("Row size: "); scanf("%i", &size_j);

    float matrix[size_i][size_j];

    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            scanf(" %f", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size_i; i++) {
        for (int j = 0; j < size_j; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
