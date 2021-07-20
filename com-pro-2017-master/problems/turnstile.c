/*
C Programming Practice - Turnstile
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Main function */
    int people = 0;
    bool unlocked = false;
    char action;

    do {
        printf("Action: ");
        scanf(" %c", &action);
        switch (action) {
            case 'C':
                unlocked = true;
                break;
            case 'P':
                if (unlocked) {
                    people++;
                }
                unlocked = false;
                break;
            case 'X':
                break;
            default:
                printf("Error: Action '%c' not recognized, please try again.\n", action);
        }
    } while (action != 'X');

    printf("People: %i\n", people);

    return 0;
}
