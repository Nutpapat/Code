/*
Computer Programming - Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    /* Main function */
    char input;
    scanf("%c", &input);

    if (isdigit(input)) {
        printf("number\n");
    }
    else if (islower(input)) {
        printf("lowercase\n");
    }
    else if (isupper(input)) {
        printf("uppercase\n");
    }
    else {
        printf("error\n");
    }

    return 0;
}