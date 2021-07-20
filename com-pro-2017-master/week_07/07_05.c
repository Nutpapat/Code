/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <ctype.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main() {
    /* Main function */
    int size = (int)getValue();
    double array[size];
    for (short i = 0; i < size; i++)
        array[i] = getValue();

    printf("%i Values\n", size);
    printf("Min: %.3lf\n", findMin(array, size));
    printf("Max: %.3lf\n", findMax(array, size));
    printf("Avg: %.3lf\n", findAvg(array, size));

    return 0;
}

double getValue() {
    /* Get value in double-type */
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    /* Returns the lowest value in the array */
    double min = array[0];
    for (short i = 0; i < size; i++)
        if (array[i] < min)
            min = array[i];
    return min;
}

double findMax(double array[], int size) {
    /* Returns the highest value in the array */
    double max = array[0];
    for (short i = 0; i < size; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

double findAvg(double array[], int size) {
    /* Returns the average value of the array */
    double sum = 0;
    for (short i = 0; i < size; i++)
        sum += array[i];
    return sum/size;
}
