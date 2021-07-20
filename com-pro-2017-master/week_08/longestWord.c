/*
Computer Programming - Week 08
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char text[128];
    scanf("%[^\n]", text);
    int index = 0, longest = 0, j = 0;

    // Counting
    for (short i = 0; i < strlen(text)+1; i++) {
        if (text[i] == ' ' || text[i] == '\0') {
            if (j > longest) {
                longest = j;
                index = i - longest;
            }
            j = 0;
            continue;
        }
        j++;
    }

    // Output
    for (short i = 0 ; i < longest; i++)
        printf("%c", text[index+i]);

    printf("\n");

    return 0;
}
