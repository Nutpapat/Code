/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /* Main function */
    char text[301], target;
    int count = 0;
    scanf("%[^\n] %c", text, &target);

    // Count matched characters
    for (int i = 0; i < (int)strlen(text); i++) {
        if (tolower(text[i]) == tolower(target)) {
            count++;
        }
    }

    // Output
    int j = 0;
    if (count > 0) {
        printf("There is/are %i \"%c\" in the above sentences.\n", count, target);
        printf("Position: ");
        // Display positions
        for (int i = 0; i < (int)strlen(text); i++) {
            if (tolower(text[i]) == tolower(target)) {
                printf("%i", i+1);
                j++;
                if (j < count) {
                    printf(", ");
                }
            }
        }
        printf("\n");
    }
    else {
        printf("Not found.\n");
    }

    return 0;
}
