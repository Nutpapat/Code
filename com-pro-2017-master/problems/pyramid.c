/*
C Programming Practice - Pyramid
Teerapat Kraisrisirikul
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num, space;
    scanf("%i", &num);

    for(int i = 0; i < num; i++) {
        space = num - i - 1;
        for(int j = 0; j < space; j++) {
            printf(" ");
        }
        for(int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
