/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /* Main function */
    char text[256];
    short words = 0, length = 0;
    scanf("%[^\n]", text);

    // Counting words
    for (short i = 0; i < strlen(text)+1; i++)
        if (text[i] == ' ' || text[i] == '\0')
            words++;

    // Output
    printf("%i words\n", words);
    printf("----\n");

    for (short i = 0; i < strlen(text)+1; i++) {
        if (text[i] == ' ' || text[i] == '\0') {
            printf(" : %i\n", length);
            length = 0;
        }
        else {
            putchar(tolower(text[i]));
            length++;
        }
    }

    return 0;
}
