/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int num, a = 0, b = 1;
    scanf("%i", &num);

    for (int i = 0; i < num+1; i++) {
        a = a + b;
        b = a - b;
        a = a - b;
        b = b + a;
    }

    printf("method = %i\n", a);

    return 0;
}
