/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /* Main function */
    int chr = 0, word = 0, line = 0;
    char text[512][512];

    // Input & Counting lines
    for (short i = 0; i < 512; i++) {
        scanf(" %[^\n]", text[i]);
        if (strcmp(text[i], ".") == 0)
            break;
        line++;
    }

    // Counting characters and words
    for (short i = 0; i < line; i++) {
        for (short j = 0; j < strlen(text[i])+1; j++) {
            if (text[i][j] == ' ' || text[i][j] == '\0')
                word++;
            else
                chr++;
            if (text[i][j] == '\0')
                break;
        }
    }

    printf("Char = %i, word = %i, line = %i\n", chr, word, line);

    return 0;
}
