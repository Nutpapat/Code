/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char num[6];
    scanf("%s", num);

    printf("%1.1s%79.0s", num, "");
    printf("%3.2s%77.0s", num, "");
    printf("%5.3s%75.0s", num, "");
    printf("%7.4s%73.0s", num, "");
    printf("%9.5s%71.0s", num, "");

    return 0;
}