/*
Computer Programming - Week 10
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /* Main function */
    char text[256];
    scanf("%[^\n]", text);

    for (int i = 0; i < strlen(text); i++) {
        if (islower(text[i])) {
            text[i] -= 3*(i%3 == 0) + 8*(i%3 == 1) + 5*(i%3 == 2);
            text[i] += 26 * (text[i] < 'a');
        }
        else {
            text[i] -= 3*(i%3 == 0) + 8*(i%3 == 1) + 5*(i%3 == 2);
            text[i] += 26 * (text[i] < 'A');
        }
    }

    printf("%s\n", text);

    return 0;
}
