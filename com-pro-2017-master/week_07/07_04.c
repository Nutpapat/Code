/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    /* Main function */
    double temp;
    char unit;
    scanf("%lf %c", &temp, &unit);

    if (tolower(unit) == 'f')
        printCelcius(fahrenheitToCelcius(temp));
    else if (tolower(unit) == 'c')
        printFarenheit(celsiusToFahrenheit(temp));

    return 0;
}

double celsiusToFahrenheit(double celcius) {
    /* Convert Celcius to Fahrenheit */
    return 32 + celcius*9/5;
}

double fahrenheitToCelcius(double fahrenheit) {
    /* Convert Fahrenheit to Celcius */
    return (fahrenheit - 32)*5/9;
}

void printFarenheit(double fahrenheit) {
    /* Print temperature in Fahrenheit unit */
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    /* Print temperature in Celcius unit */
    printf("%.2lf c", celcius);
}
