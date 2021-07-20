/*
C Programming Practice - Logic (Discrete Math)
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>
#include "my_lib.h"

bool equation(bool p, bool q, bool r, bool s);

int main() {
    /* Main function */
    // Boolean values
    bool p = true;
    bool q = true;
    bool r = true;
    bool s = true;
    bool x;

    printf("p\tq\tr\ts\tx\n");
    printf("----------------------------------\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    x = equation(p, q, r, s);
                    printf("%c\t%c\t%c\t%c\t%c\n", logicchar(p), logicchar(q), logicchar(r), logicchar(s), logicchar(x));
                    s = !s;
                }
                r = !r;
            }
            q = !q;
        }
        p = !p;
    }

    return 0;
}

bool equation(bool p, bool q, bool r, bool s) {
    return (then(((p || q) && !p), q));
}











