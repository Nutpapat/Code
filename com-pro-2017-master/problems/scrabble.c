/* Scrabble */

/*
    LIST OF ARRAYS:
        1. charset  - stores characters
        2. score    - stores each character's score
        3. raw_word - stores original input 3 (later discarded)
        4. word     - stores words
        5. result   - stores each word's total score
*/

#include <stdio.h>
#include <string.h>

int find(char text[], char target);
int max(int array[], int length);

int main() {
    /* Main function */

    // Input 1: Charset
    char charset[64];
    scanf("%s", charset);

    // Input 2: Points
    int score[64];
    for (short i = 0; i < strlen(charset); i++)
        scanf(" %i", &score[i]);

    // Input 3: Words
    char raw_word[256];
    scanf(" %[^\n]", raw_word);

    char *p = strtok(raw_word, " ");
    char *word[64];

    short c = 0;
    while (p != NULL) {
        word[c++] = p;
        p = strtok(NULL, " ");
    }

    // Score Calculation
    int result[64] = {0};

    for (short i = 0; i < c; i++) {
        for (short j = 0; j < strlen(word[i]); j++) {
            result[i] += score[find(charset, word[i][j])];
        }
    }

    // Final Output
    printf("%s %i\n", word[max(result, c, "index")], max(result, c, "value"));

    return 0;
}

int find(char text[], char target) {
    /* Find specific character in the text */
    for (int i = 0; i < strlen(text); i++)
        if (text[i] == target)
            return i;
    return -1;
}

int max(int array[], int length, char return_type[]) {
    /* Find the highest number in the array of int, returns as either value or index. */
    int max_value = [array[0], 0];

    for (int i = 1; i < length; i++) {
        if (array[i] > max_value[0]) {
            max_value[0] = array[i];
            max_value[1] = i;
        }
    }

    // Choose One: Returns value or index
    if (strcmp(return_type, "value") == 0)
        return max_value[0];
    else if (strcmp(return_type, "index") == 0)
        return max_value[1];
}
