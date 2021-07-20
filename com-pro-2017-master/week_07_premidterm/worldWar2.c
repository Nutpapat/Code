/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int find(char ch);
int mod(int a, int b);

char wheel[26] = {'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd',
                  'k', 'l', 'j', 'o', 's', 'h', 't', 'u',
                  'f', 'v', 'z', 'g', 'w', 'i', 'a', 'b',
                  'x', 'y'};

int main() {
    /* Main function */
    int rolls;
    char data, text[256];
    scanf("%i%c %[^\n]", &rolls, &data, text);
    char dir = (data == 'R') * -1 + (data == 'L') * 1;

    // Encryption Process
    for (int i = 0; i < strlen(text); i++) {
        if (isupper(text[i]))
            text[i] = toupper(wheel[mod(find(text[i])+rolls*dir, 26)]);
        else if (islower(text[i]))
            text[i] = tolower(wheel[mod(find(text[i])+rolls*dir, 26)]);
    }

    printf("%s\n", text);

    return 0;
}

int find(char ch) {
    /* Return index of 'ch' from the 'wheel' */
    for (int i = 0; i < 26; i++)
        if (tolower(ch) == wheel[i])
            return i;

    return -1;
}

int mod(int a, int b) {
    /* Modulo which supports negative number */
    if (a < 0)
        a += b * (-1 * a / b + 1);

    return a % b;
}
