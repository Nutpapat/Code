/*
C Programming Practice - Struct Basic
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[30];
    int age;
    Date birthday;
} Person;

int main () {
    /* Main function */
    Person customer[5] = {{"AAA", 18, {15, 6, 1999}},
                          {"BBB", 17, {16, 3, 2000}},
                          {"CCC", 19, {11, 11, 1998}},
                          {"DDD", 20, {20, 9, 1997}},
                          {"EEE", 22, {14, 2, 1996}}};

    printf("No.\tName\tAge\tBirthday\n");
    for (int i = 0; i < 5; i++) {
        printf("%02i\t", i);
        printf("%s\t", customer[i].name);
        printf("%i\t", customer[i].age);
        printf("%02i/%02i/%i", customer[i].birthday.day, customer[i].birthday.month, customer[i].birthday.year);
        printf("\n");
    }

    return 0;
}
