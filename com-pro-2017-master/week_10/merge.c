/*
Computer Programming - Week 10
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char text_a[256], text_b[256];
    scanf("%[^\n] %[^\n]", text_a, text_b);

    char *a = &text_a[0], *b = &text_b[0];    // Pointer variables

    while (1) {
        // Case: Both words not ended
        if (*a != ' ' && *a != '\0' && *b != ' ' && *b != '\0') {
            putchar(*a);
            putchar(*b);
            a++;
            b++;
        }

        // Case: Both sentences ended
        else if (*a == '\0' && *b == '\0') {
            putchar('\n');
            break;
        }

        // Case: Both words ended
        else if ((*a == ' ' || *a == '\0') && (*b == ' ' || *b == '\0')) {
            putchar(' ');
            a += (*a == ' ');   // Next char, if sentence isn't ended.
            b += (*b == ' ');   // Next char, if sentence isn't ended.
        }

        // Case: Only word B ended
        else if (*b == ' ' || *b == '\0') {
            putchar(*a);
            a++;
        }

        // Case: Only word A ended
        else if (*a == ' ' || *a == '\0') {
            putchar(*b);
            b++;
        }
    }

    return 0;
}
