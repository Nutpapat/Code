/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <stdlib.h>

#define empty -999999

int is_in(int num, int **arr, int size);
int find(int num, int **arr, int size);

int main() {
    /* Main function */
    int amount;
    scanf("%i", &amount);
    int *numbers[amount], num;

    // Memory Allocation & Set default values for 'numbers' to prevent bugs
    for (int i = 0; i < amount; i++) {
        numbers[i] = (int*)malloc(3*sizeof(int));
        numbers[i][0] = empty;
        numbers[i][1] = 0;
    }

    // Input values
    int j = 0;
    for (int i = 0; i < amount; i++) {
        scanf("%i", &num);
        if (!is_in(num, numbers, amount)) {
            numbers[j][0] = num;
            numbers[j][1]++;
            j++;
        }
        else {
            numbers[find(num, numbers, amount)][0] = num;
            numbers[find(num, numbers, amount)][1]++;
        }
    }

    // Output unique numbers
    for (int i = 0; i < amount; i++) {
        if (numbers[i][0] == empty) {
            break;
        }
        printf("%i ", numbers[i][0]);
    }
    printf("\n");

    // Output duplicated numbers
    if (is_in(empty, numbers, amount)) {
        for (int i = 0; i < amount; i++) {
            if (numbers[i][1] > 1) {
                printf("%i ", numbers[i][0]);
            }
        }
        printf("\n");
    }
    else {
        printf("Not found duplicate.\n");
    }

    return 0;
}

int is_in(int num, int **arr, int size) {
    /* Check if 'num' is in array */
    for (int i = 0; i < size; i++) {
        if (num == arr[i][0]) {
            return 1;
        }
    }
    return 0;
}

int find(int num, int **arr, int size) {
    /* Find the position of 'num' in the array */
    for (int i = 0; i < size; i++) {
        if (num == arr[i][0]) {
            return i;
        }
    }
    return -1;
}
