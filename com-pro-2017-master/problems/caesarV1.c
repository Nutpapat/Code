/*
C Programming Practice - caesarV1
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Main function */
    char text[300]; scanf("%[^\n]", text);
    int decode; scanf("%i", &decode);
    int index;

    for (int i = 0; i < 300; i++) {
        index = (int)text[i];
        if (text[i] == '\0') {
            break;
        }
        else if (((int)'A' <= index) && (index <= (int)'Z')) {
            index += decode;
            while (index < (int)'A') {
                index += 26;
            }
            while (index > (int)'Z') {
                index -= 26;
            }
        }
        else if (((int)'a' <= index) && (index <= (int)'z')) {
            index += decode;
            while (index < (int)'a') {
                index += 26;
            }
            while (index > (int)'z') {
                index -= 26;
            }
        }
        printf("%c", (char)index);
    }
    printf("\n");

    return 0;
}
