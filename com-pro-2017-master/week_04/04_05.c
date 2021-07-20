/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char var = getchar();

    if ('a' <= var && var <= 'z') printf("%c\n", var+'A'-'a');
    else if ('A' <= var && var <= 'Z') printf("%c\n", var-'A'+'a');
    else printf("error\n");

    return 0;
}
