/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char text[256];
    scanf("%[^\n]", text);

    for (short i = 0; i < strlen(text); i++)
        if (text[i] != ' ')
            putchar(text[i]);

    printf("\n");

    return 0;
}
