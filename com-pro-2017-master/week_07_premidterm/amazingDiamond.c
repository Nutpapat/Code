/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <stdlib.h>

#define runline() {\
    /* Run a line of amazing diamond, depends on variable 'i' */ \
    for (int j = 0; j < num*2+1; j++) {\
        if (i + j - num < 0 || abs(i - j) > num)\
            putchar(' ');\
        else if (i > num || j > num)\
            printf("%i", (abs(abs(i-j)-num))%10);\
        else\
            printf("%i", (i+j-num)%10);\
    }\
    putchar('\n');\
}

int main() {
    /* Main function */
    int num;
    scanf("%i", &num);

    // Upper parts (includes middle line)
    for (int i = 0; i < num+1; i++) {
        runline();
    }

    // Lower parts
    for (int i = num-1; i >= 0; i--) {
        runline();
    }

    return 0;
}
