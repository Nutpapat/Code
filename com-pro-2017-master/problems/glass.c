/*
C Programming Practice - Glass
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Main function */
    bool glass[3] = {true, false, false};
    bool saved;
    char command;

    while (true) {
        printf("Command: ");
        scanf(" %c", &command);

        if (command == 'A') {
            saved = glass[0];
            glass[0] = glass[1];
            glass[1] = saved;
        }
        else if (command == 'B') {
            saved = glass[1];
            glass[1] = glass[2];
            glass[2] = saved;
        }
        else if (command == 'C') {
            saved = glass[0];
            glass[0] = glass[2];
            glass[2] = saved;
        }
        else if (command == 'X') {
            break;
        }
        else {
            printf("Error: Command '%c' not found.\n", command);
        }
    }

    printf("{%i, %i, %i}\n", glass[0], glass[1], glass[2]);

    return 0;
}
