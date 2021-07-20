/*
Computer Programming - Lab Week 06
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define swap(name_f_a, name_l_a, name_f_b, name_l_b) {\
    char temp_f[64], temp_l[64];\
    strcpy(temp_f, name_f_a);\
    strcpy(temp_l, name_l_a);\
    strcpy(name_f_a, name_f_b);\
    strcpy(name_l_a, name_l_b);\
    strcpy(name_f_b, temp_f);\
    strcpy(name_l_b, temp_l);\
}

int main() {
    /* Main function */
    char name[20][2][64];

    // Input names
    for (int i = 0; i < 20; i++)
        scanf("%s %s", name[i][0], name[i][1]);

    // Capitalize all firstnames and lastnames
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < (int)(strlen(name[i][j])); k++) {
                if (k == 0)
                    name[i][j][k] = toupper(name[i][j][k]);
                else
                    name[i][j][k] = tolower(name[i][j][k]);
            }
        }
    }

    // Sorting
    for (int i = 0; i < 19; i++) {
        for (int j = i+1; j > 0; j--) {
            if (strcmp(name[j-1][0], name[j][0]) > 0) {
                swap(name[j-1][0], name[j-1][1], name[j][0], name[j][1]);
            }
            else {
                break;
            }
        }
    }

    // Output
    for (int i = 0; i < 20; i++)
        printf("%s %s\n", name[i][0], name[i][1]);

    return 0;
}
