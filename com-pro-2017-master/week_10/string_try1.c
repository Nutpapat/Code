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
    int printed = 0;

    // A and B
    printed = 0;
    for (short i = 0; i < strlen(text_a); i++)
        if (is_in(text_b, text_a[i])) {
            putchar(text_a[i]);
            printed = 1;
        }
    if (!printed)
        printf("none");
    putchar('\n');

    // A - B
    printed = 0;
    for (short i = 0; i < strlen(text_a); i++)
        if (!is_in(text_b, text_a[i])) {
            putchar(text_a[i]);
            printed = 1;
        }
    if (!printed)
        printf("none");
    putchar('\n');

    // B - A
    printed = 0;
    for (short i = 0; i < strlen(text_b); i++)
        if (!is_in(text_a, text_b[i])) {
            putchar(text_b[i]);
            printed = 1;
        }
    if (!printed)
        printf("none");
    putchar('\n');

    // A or B
    printf("%s", text_a);
    for (short i = 0; i < strlen(text_b); i++)
        if (!is_in(text_a, text_b[i]))
            putchar(text_b[i]);
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
