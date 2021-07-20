/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char ch);

int main() {
    /* Main function */
    int count = 0;
    char text[1024];
    scanf("%[^\n]", text);

    for (short i = 0; i < strlen(text); i++)
        if (isvowel(text[i]))
            count++;

    printf("%i\n", count);

    return 0;
}

int isvowel(char ch) {
    /* Check if 'ch' is a vowel */
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
