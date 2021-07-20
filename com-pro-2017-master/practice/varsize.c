/*
C Programming Practice - Variable type sizes
Teerapat Kraisrisirikul
*/

#include <stdio.h>

int main() {
    /* Main function */
    printf("sizeof(char)        >> %lu byte\n", sizeof(char));
    printf("sizeof(short)       >> %lu bytes\n", sizeof(short));
    printf("sizeof(int)         >> %lu bytes\n", sizeof(int));
    printf("sizeof(long)        >> %lu bytes\n", sizeof(long));
    printf("sizeof(long long)   >> %lu bytes\n", sizeof(long long));
    printf("sizeof(float)       >> %lu bytes\n", sizeof(float));
    printf("sizeof(double)      >> %lu bytes\n", sizeof(double));
    printf("sizeof(long double) >> %lu bytes\n", sizeof(long double));

    return 0;
}
