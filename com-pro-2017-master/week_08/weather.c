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
int make_decision(struct Weather data);

int main() {
    /* Main function */
    int amount;
    scanf("%i", &amount);
    struct Weather data[amount];

    // Input
    for (short i = 0; i < amount; i++)
        data[i] = getdata();

    // Output
    for (short i = 0; i < amount; i++) {
        if (make_decision(data[i]))
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}

struct Weather getdata() {
    /* Get weather data */
    struct Weather data;
    scanf("%s %i %i %c", data.outlook, &data.temperature, &data.humidity, &data.wind);
    return data;
}

int make_decision(struct Weather data) {
    /* Make decision to go out or not */
    if (strcmp(data.outlook, "overcast") == 0) {
        return 1;
    }
    else if (strcmp(data.outlook, "rain") == 0) {
        if (data.wind == 'F')
            return 1;
        else
            return 0;
    }
    else if (strcmp(data.outlook, "sunny") == 0) {
        if (data.humidity > 77)
            return 0;
        else
            return 1;
    }
    return 0;
}
