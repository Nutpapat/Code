/*
C Programming Practice - Temperature Converter
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Main function */
    float temp;
    char unit, target;
    scanf("%f", &temp);

    // Input initial unit
    while (true) {
        scanf(" %c", &unit);
        if ((unit == 'C') || (unit == 'F') || (unit == 'R') || (unit == 'K')) {
            break;
        }
        else {
            printf("Error: Temperature unit '%c' not found.\n", unit);
        }
    }

    // Convert to Celcius unit
    switch(unit) {
        case 'C':
            break;
        case 'F':
            temp = (temp-32)/9*5;
            break;
        case 'R':
            temp *= (float)5/4;
            break;
        case 'K':
            temp -= 273;
            break;
    }

    // Input target unit
    while (true) {
        scanf(" %c", &target);
        if ((target == 'C') || (target == 'F') || (target == 'R') || (target == 'K')) {
            break;
        }
        else {
            printf("Error: Temperature unit '%c' not found.\n", target);
        }
    }

    // Convert temperature to the selected unit
    switch(target) {
        case 'C':
            break;
        case 'F':
            temp = temp/5*9+32;
            break;
        case 'R':
            temp *= (float)4/5;
            break;
        case 'K':
            temp += 273;
            break;
    }

    printf("%.2f\n", temp);

    return 0;
}
