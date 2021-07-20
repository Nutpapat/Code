/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char firstname[30], surname[30];
    int id;
    int day, month, year;
    float gpa;

    scanf("%s %s", firstname, surname);
    scanf("%i", &id);
    scanf("%i/%i/%i", &day, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", firstname, surname);
    printf("ID: %i\n", id);
    printf("DOB: %02i-%02i-%i\n", day, month, year);
    printf("GPA: %.2f\n", gpa);

    return 0;
}