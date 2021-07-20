/*
Computer Programming - Week 08
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

struct Student {
    /* Student data structure */
    char name[64];
    char surname[64];
    char sex[8];
    short age;
    char id[16];
    double gpa;
};

int main() {
    /* Main function */
    struct Student std;
    scanf("%s %s %s %hi %s %lf", std.name, std.surname, std.sex, &std.age, std.id, &std.gpa);

    if (strcmp("Male", std.sex) == 0)
        printf("Mr %c %s (%hi) ID: %s GPA %.2lf\n", std.name[0], std.surname, std.age, std.id, std.gpa);
    else if (strcmp("Female", std.sex) == 0)
        printf("Miss %c %s (%hi) ID: %s GPA %.2lf\n", std.name[0], std.surname, std.age, std.id, std.gpa);

    return 0;
}
