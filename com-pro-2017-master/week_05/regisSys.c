/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int type_a = 0, type_b = 0, type_c = 0, type_d = 0;
    int age, height, weight;
    int age_total = 0, height_total = 0, weight_total = 0;

    for (int i = 0; i < 50; i++) {
        scanf("%i %i %i", &age, &height, &weight);

        if (age >= 20 && height >= 160)
            type_a++;
        if (age < 20 && (height <= 180 || weight >= 60))
            type_b++;
        if (age >= 30 && 40 <= weight && weight <= 80)
            type_c++;
        if (age < 40 && (weight < 85 || height <= 200))
            type_d++;

        age_total += age;
        height_total += height;
        weight_total += weight;
    }

    printf("Age >= 20 and Height >= 160: %i\n", type_a);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %i\n", type_b);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %i\n", type_c);
    printf("Age < 40 and Weight < 85 or Height <= 200: %i\n", type_d);
    printf("Average Age: %i\n", age_total/50);
    printf("Average Height: %.2f\n", (float)height_total/50);
    printf("Average Weight: %.2f\n", (float)weight_total/50);

    return 0;
}
