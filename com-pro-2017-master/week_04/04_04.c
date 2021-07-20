/*
Computer Programming - Lab Week 04
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    float score;
    scanf("%f", &score);

    if (score > 100) printf("Out of Range\n");
    else if (score >= 80) printf("A\n");
    else if (score >= 70) printf("B\n");
    else if (score >= 60) printf("C\n");
    else if (score >= 50) printf("D\n");
    else if (score >= 0) printf("F\n");
    else printf("Out of Range\n");

    return 0;
}
