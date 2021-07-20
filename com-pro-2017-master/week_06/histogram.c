/*
Computer Programming - Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_in(char ch, int **data);
int find(char ch, int **data);

int main() {
    /* Main function */
    int *data[26], amount;
    char ch;
    scanf("%i", &amount);

    // Memory allocation
    for (int i = 0; i < 26; i++) {
        data[i] = (int*)malloc(3*sizeof(int));
    }

    // Set starting array values
    for (int i = 0; i < 26; i++) {
        data[i][0] = ' ';
        data[i][1] = 0;
    }

    // Data management
    int j = 0;
    for (int i = 0; i < amount; i++) {
        scanf(" %c", &ch);
        ch = tolower(ch);
        if (!is_in(ch, data)) {
            data[j][0] = ch;
            data[j][1] += 1;
            j++;
        }
        else {
            data[find(ch, data)][1] += 1;
        }
    }

    // Output
    for (int i = 0; i < 26; i++) {
        if (data[i][0] == ' ') {
            break;
        }
        printf("%c: %i\n", data[i][0], data[i][1]);
    }

    return 0;
}

int is_in(char ch, int **data) {
    /* Check if 'ch' is in 'data' */
    for (int i = 0; i < 26; i++) {
        if (ch == data[i][0]) {
            return 1;
        }
    }
    return 0;
}

int find(char ch, int **data) {
    /* Find the position of 'ch' in 'data' */
    int i;
    for (i = 0; i < 26; i++) {
        if (ch == data[i][0]) {
            break;
        }
    }
    return i;
}
