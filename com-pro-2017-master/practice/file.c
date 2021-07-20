/*
C Programming Practice - File
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

void readFile();
void writeFile();

int main() {
    /* Main function */
    //readFile();
    //writeFile();

    return 0;
}

void readFile() {
    /* Sample: Read File */
    FILE *file_point;
    file_point = fopen("sample_text.txt", "r");

    char ch;

    if (file_point == NULL) {
        printf("Error: File not found.\n");
    }
    else {
        while (true) {
            ch = getc(file_point);
            if (ch == EOF) {
                break;
            }
            printf("%c", ch);
        }
        printf("\n");
    }
}

void writeFile() {
    /* Sample: Write File */
    FILE *file_point;
    file_point = fopen("sample_text.txt", "w");

    char ch;

    if (file_point == NULL) {
        printf("Error: File not found.\n");
    }
    else {
        for (int i = 'A'; i <= 'z'; i++) {
            ch = putc(i, file_point);
        }
        printf("\n");
    }
}


















