/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    int target, combo = 0, count = 0;
    char binary[101];
    scanf("%i %s", &target, binary);

    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1')
            combo++;
        else
            combo = 0;
        if (combo >= target)
            count++;
    }

    printf("%i\n", count);

    return 0;
}
