/*
Computer Programming - Week 10
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

void swap_text(char *a, char *b);

int main() {
    /* Main function */
    int amount;
    scanf("%i", &amount);
    char name[amount][256];

    // Input
    for (int i = 0; i < amount; i++)
        scanf(" %[^\n]", name[i]);

    // Sort
    for (int i = 1; i < amount; i++) {
        for (int j = i; j > 0; j--) {
            if (strcmp(name[j], name[j-1]) < 0)
                swap_text(name[j], name[j-1]);
            else
                break;
        }
    }

    // Output
    for (int i = 0; i < amount; i++)
        printf("%s\n", name[i]);

    return 0;
}

void swap_text(char *a, char *b) {
    /* Swap text */
    char temp[64];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
