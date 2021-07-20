/*
Computer Programming - Week 07
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    char a[256], b[256], temp[256];
    int num;
    scanf("%s %s %i", a, b, &num);

    for (int i = 1; i < num; i++) {
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
        strcat(b, a);
    }

    printf("%s\n", a);

    return 0;
}
