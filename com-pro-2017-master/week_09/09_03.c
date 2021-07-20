/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /* Main function */
    int count = 0;
    char target, text[256];
    scanf("%c %[^\n]", &target, text);

    for (short i = 0; i < strlen(text); i++)
        if (tolower(text[i]) == tolower(target))
            count++;

    printf("%i\n", count);

    return 0;
}
