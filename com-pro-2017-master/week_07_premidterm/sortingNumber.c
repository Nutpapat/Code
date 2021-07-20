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
    char num[6];
    scanf("%s", num);

    for (int i = 0; i < strlen(num)-1; i++) {
        for (int j = strlen(num)-1; j > 0; j--) {
            if (num[j] < num[j-1]) {
                swap(num[j-1], num[j]);
            }
        }
    }

    printf("%s\n", num);

    return 0;
}
