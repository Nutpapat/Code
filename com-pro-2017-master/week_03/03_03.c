/*
Computer Programming - Lab Week 03
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int total, day, hour, minute, second;
    scanf("%i", &total);

    minute = total/60;
    second = total%60;

    hour = minute/60;
    minute %= 60;

    day = hour/24;
    hour %= 24;

    printf("%i s = %i d %i h %i m %i s\n", total, day, hour, minute, second);

    return 0;
}
