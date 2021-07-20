/*
Computer Programming - Pre-Midterm Week
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    int hp;
    char attack[64];
    scanf("%i %s", &hp, attack);
    int player[2] = {hp, hp}, combo[2] = {0, 0};

    for (int i = 0; i < strlen(attack); i++) {
        // Attack 1 time
        player[((int)attack[i]-'0') % 2 == 0]--;

        // Check for combos
        if ((int)attack[i]-'0' == combo[0])
            combo[1]++;
        else {
            combo[0] = (int)attack[i]-'0';
            combo[1] = 1;
        }

        // Bonus Damage from combos
        if (combo[1] == 3) {
            player[((int)attack[i]-'0') % 2 == 0] -= 3;
            combo[0] = 0;
            combo[1] = 0;
        }
    }

    // Match Output
    if (player[0] == player[1])
        printf("- %i %i\n", player[0], player[1]);
    else
        printf("%i %i %i\n", player[1] > player[0], player[0], player[1]);

    return 0;
}
