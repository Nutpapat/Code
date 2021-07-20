/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char encode(char ch);

int main() {
    /* Main function */
    char text[201];
    scanf("%[^\n]", text);

    for (int i = 0; i < (int)strlen(text); i++) {
        printf("%c", encode(text[i]));
    }
    printf("\n");

    return 0;
}

char encode(char ch) {
    /* Encode the character -5 */
    char wheel[26] = {'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd',
                      'k', 'l', 'j', 'o', 's', 'h', 't', 'u',
                      'f', 'v', 'z', 'g', 'w', 'i', 'a', 'b',
                      'x', 'y'};

    if (!isalpha(ch))
        return ch;

    for (int i = 0; i < 26; i++) {
        if (tolower(ch) == wheel[i]) {
            if (islower(ch)) {
                if (i <= 4)
                    return wheel[i-5+26];
                else
                    return wheel[i-5];
            }
            else if (isupper(ch)) {
                if (i <= 4)
                    return toupper(wheel[i-5+26]);
                else
                    return toupper(wheel[i-5]);
            }
        }
    }
    return ch;
}
