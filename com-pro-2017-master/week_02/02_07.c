/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char text[31];
    for (int i = 0; i < 4; i++) {
        scanf("%s", text);
        printf("String %i: %.*s\n", i+1, i+3, text);
    }

    return 0;
}