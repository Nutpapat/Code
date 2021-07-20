/*
C Programming Practice - Fibonacci
Teerapat Kraisrisirikul
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num;
    unsigned long a = 0, b = 1, saved = 0;
    scanf("%i", &num);

    // NOTES: Maximum Fibonacci Number is 93, over 94 will overflow.
    for (int i = 0; i < num; i++) {
        saved = a;
        a = b;
        b += saved;
    }
    printf("%lu\n", a);

    return 0;
}
