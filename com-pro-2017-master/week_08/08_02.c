/*
Computer Programming - Week 08
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define swap(a, b) {\
    temp = a;\
    a = b;\
    b = temp;\
}

#define capitalize(text) {\
    text[0] = toupper(text[0]);\
    for (short i = 1; i < strlen(text); i++)\
        text[i] = tolower(text[i]);\
}

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
    char key[8];
    struct Student std[20], temp;
    for (short i = 0; i < 20; i++) {
        scanf("%s %s %s %hi %s %lf", std[i].name, std[i].surname, std[i].sex, &std[i].age, std[i].id, &std[i].gpa);
        capitalize(std[i].name);
        capitalize(std[i].surname);
        capitalize(std[i].sex);
    }
    scanf(" %s", key);
    capitalize(key);

    // Sorting
    for (short i = 1; i < 20; i++) {
        for (short j = i; j > 0; j--) {
            if (strcmp(key, "Name") == 0 && strcmp(std[j].name, std[j-1].name) < 0) {
                swap(std[j], std[j-1]);
            }
            else if (strcmp(key, "Surname") == 0 && strcmp(std[j].surname, std[j-1].surname) < 0) {
                swap(std[j], std[j-1]);
            }
            else if (strcmp(key, "Id") == 0 && strcmp(std[j].id, std[j-1].id) < 0) {
                swap(std[j], std[j-1]);
            }
        }
    }

    // Output
    for (short i = 0; i < 20; i++) {
        if (strcmp("Male", std[i].sex) == 0)
            printf("Mr %c %s (%hi) ID: %s GPA %.2lf\n", std[i].name[0], std[i].surname, std[i].age, std[i].id, std[i].gpa);
        else if (strcmp("Female", std[i].sex) == 0)
            printf("Miss %c %s (%hi) ID: %s GPA %.2lf\n", std[i].name[0], std[i].surname, std[i].age, std[i].id, std[i].gpa);
    }

    return 0;
}
