/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char text[]);

int main() {
    /* Main function */
    int amount;
    char text[101];
    scanf("%i", &amount);

    for (int i = 0; i < amount; i++) {
        scanf("%s", text);
        if (is_palindrome(text)) {
            printf("%s\n", text);
        }
    }

    return 0;
}

int is_palindrome(char text[]) {
    /* Check if the string is palindrome */
    for (int i = 0; i < (int)strlen(text); i++) {
        if (text[i] != text[strlen(text)-i-1]) {
            return 0;
        }
    }
    return 1;
}
