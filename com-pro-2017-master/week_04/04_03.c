/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    /* Main function */
    char grade = toupper(getchar());

    switch (grade) {
        case 'A':
            printf("Genius\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Try Harder\n");
            break;
        case 'D':
            printf("Very Bad\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;
}
