/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

#define swap(a, b) {\
    a = a + b;\
    b = a - b;\
    a = a - b;\
}

int main() {
    /* Main function */
    char start, sequence[32];
    int glass[3] = {0, 0, 0};
    scanf("%c %s", &start, sequence);

    // Starting glass
    switch (start) {
        case 'L':
            glass[0] = 1;
            break;
        case 'C':
            glass[1] = 1;
            break;
        case 'R':
            glass[2] = 1;
            break;
    }

    // Swapping
    for (int i = 0; i < strlen(sequence); i++) {
        switch (sequence[i]) {
            case 'A':
                swap(glass[0], glass[1]);
                break;
            case 'B':
                swap(glass[1], glass[2]);
                break;
            case 'C':
                swap(glass[0], glass[2]);
                break;
        }
    }

    // Finding
    if (glass[0])
        printf("L\n");
    else if (glass[1])
        printf("C\n");
    else if (glass[2])
        printf("R\n");

    return 0;
}
