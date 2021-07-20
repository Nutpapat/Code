/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char fname1[20], sname1[20], person2[40], person3[40];
    scanf("%s %s %[^\n] %[^\n]", fname1, sname1, person2, person3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);

    return 0;
}
