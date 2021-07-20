/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char num[6];
    scanf("%s", num);

    printf("%c%c%c%c%c\n", num[2], num[3], num[4], num[0], num[1]);

    return 0;
}