/*
Computer Programming - Lab Week 01
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    int score;
    char grade;
    scanf("%i", &score);

    if (score >= 80) {
        grade = 'A';
    }
    else if (score >= 70) {
        grade = 'B';
    }
    else if (score >= 60) {
        grade = 'C';
    }
    else if (score >= 50) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    printf("%c", grade);

    return 0;
}
