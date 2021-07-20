/*
C Programming Practice - Safe
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* Main function */
    int rolls = 0;
    char password[65], lock[65];
    scanf("%s %s", password, lock);

    // Case: Error --> Terminate Process
    if (strlen(password) != strlen(lock)) {
        printf("Error: Length mismatch.\n");
        return 0;
    }

    // Decoding
    for (int i = 0; i < strlen(password); i++) {
        if ((int)abs((int)password[i] - (int)lock[i]) > 12) {
            rolls += 26-(int)abs((int)password[i] - (int)lock[i]);
        }
        else {
            rolls += (int)abs((int)password[i] - (int)lock[i]);
        }
    }

    printf("%i\n", rolls);

    return 0;
}
