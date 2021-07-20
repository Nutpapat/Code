/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char text[101];
    scanf("%[^\n]", text);

    for (int i = (int)strlen(text)-1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}
