/*
Computer Programming - Week 10
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int is_in(char text[], char target);

int main() {
    /* Main function */
    char text_a[64], text_b[64];
    scanf("%s %s", text_a, text_b);
    int is_printed, j;

    // Section 1: A and B
    is_printed = 0;
    j = 0;
    char printed_a[64] = {0};

    for (short i = 0; i < strlen(text_a); i++)
        if (is_in(text_b, text_a[i]) && !is_in(printed_a, text_a[i])) {
            putchar(text_a[i]);
            is_printed = 1;
            printed_a[j++] = text_a[i];
        }

    if (!is_printed)
        printf("none");
    putchar('\n');

    // Section 2: A - B
    is_printed = 0;
    j = 0;
    char printed_b[64] = {0};

    for (short i = 0; i < strlen(text_a); i++)
        if (!is_in(text_b, text_a[i]) && !is_in(printed_b, text_a[i])) {
            putchar(text_a[i]);
            is_printed = 1;
            printed_b[j++] = text_a[i];
        }

    if (!is_printed)
        printf("none");
    putchar('\n');

    // Section 3: B - A
    is_printed = 0;
    j = 0;
    char printed_c[64] = {0};

    for (short i = 0; i < strlen(text_b); i++)
        if (!is_in(text_a, text_b[i]) && !is_in(printed_c, text_b[i])) {
            putchar(text_b[i]);
            is_printed = 1;
            printed_c[j++] = text_b[i];
        }

    if (!is_printed)
        printf("none");
    putchar('\n');

    // Section 4: B or A
    j = 0;
    char printed_d[128] = {0};

    for (short i = 0; i < strlen(text_a); i++)
        if (!is_in(printed_d, text_a[i])) {
            putchar(text_a[i]);
            is_printed = 1;
            printed_d[j++] = text_a[i];
        }

    for (short i = 0; i < strlen(text_b); i++)
        if (!is_in(text_a, text_b[i]) && !is_in(printed_d, text_b[i])) {
            putchar(text_b[i]);
            is_printed = 1;
            printed_d[j++] = text_b[i];
        }

    putchar('\n');

    return 0;
}

int is_in(char text[], char target) {
    /* Check if target is in text */
    for (short i = 0; i < strlen(text); i++)
        if (text[i] == target)
            return 1;

    return 0;
}
