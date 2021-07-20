/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int count;
    scanf("%i", &count);

    long double value, total = 0, max, min;

    for (int i = 0; i < count; i++) {
        scanf("%Lf", &value);
        if (i == 0) {
            max = value;
            min = value;
        }
        total += value;
        if (value < min)
            min = value;
        if (value > max)
            max = value;
    }

    printf("%i Values\n", count);
    printf("Min: %.3Lf\n", min);
    printf("Max: %.3Lf\n", max);
    printf("Avg: %.2Lf\n", total/count);

    return 0;
}
