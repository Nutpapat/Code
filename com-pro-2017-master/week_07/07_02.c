/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int strange(int x, int y);

int main() {
    /* Main function */
    int a, b, c, d;
    int r, s, t, u, v;
    scanf("%i %i %i %i", &a, &b, &c, &d);

    r = strange(a, b);
    s = strange(r, c);
    t = strange(strange(s, b), strange(4, 2));
    u = strange(t+3, s+2);
    v = strange(strange(strange(u, a), b), c);

    printf("%i %i %i %i %i\n", r, s, t, u, v);

    return 0;
}

int strange(int x, int y) {
    /* Strange equation */
    return x + y + x*y;
}
