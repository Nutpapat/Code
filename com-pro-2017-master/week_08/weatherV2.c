/*
Computer Programming - Week 08
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Weather {
    /* Weather data structure */
    char outlook[16]; // {"overcast", "sunny", "rain"}
    int temperature;
    int humidity;
    char wind; // {'T', 'F'}
};

struct Weather getdata();
void make_decision_all(struct Weather data[], int amount);

int main() {
    /* Main function */
    int amount;
    scanf("%i", &amount);
    struct Weather data[amount];

    // Input
    for (short i = 0; i < amount; i++)
        data[i] = getdata();

    // Output
    make_decision_all(data, amount);

    return 0;
}

struct Weather getdata() {
    /* Get weather data */
    struct Weather data;
    scanf("%s %i %i %c", data.outlook, &data.temperature, &data.humidity, &data.wind);
    return data;
}

void make_decision_all(struct Weather data[], int amount) {
    /* Make decision to go out or not (Array mode) */
    for (short i = 0; i < amount; i++) {
        if (strcmp(data[i].outlook, "overcast") == 0) {
            printf("yes\n");
        }
        else if (strcmp(data[i].outlook, "rain") == 0) {
            if (data[i].wind == 'F')
                printf("yes\n");
            else
                printf("no\n");
        }
        else if (strcmp(data[i].outlook, "sunny") == 0) {
            if (data[i].humidity > 77)
                printf("no\n");
            else
                printf("yes\n");
        }
    }
}
