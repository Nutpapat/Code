/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char text[256], text_new[256], temp[256];
    scanf("%[^\n]", text);

    // Overall Process
    int j, ignored = 0;
    while (1) {
        // Reset values
        j = 0;
        ignored = 0;
        strcpy(text_new, "");
        strcpy(temp, "");

        // Check each alphabet
        for (short i = 0; i < strlen(text)+1; i++) {
            if (i > 0 && text[i] == text[i-1])
                ignored = 1;
            else if (i < strlen(text)-1 && text[i] == text[i+1])
                ignored = 1;
            else
                text_new[j++] = text[i];
        }

        // Swap
        strcpy(temp, text);
        strcpy(text, text_new);
        strcpy(text_new, temp);

        if (!ignored)
            break;

        printf("%s\n", text);
    }

    return 0;
}
