/*
Computer Programming - Week 10
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char numbers[256];
    int target, printed = 0;

    scanf("%s %i", numbers, &target);

    for (int i = strlen(numbers)-1; i > 0; i--) {
        if ((int)(numbers[i]-'0') * (int)(numbers[i-1]-'0') == target) {
            printf("%c %c\n", numbers[i], numbers[i-1]);
            printed = 1;
        }
    }

    if (!printed)
        printf("none\n");

    return 0;
}
