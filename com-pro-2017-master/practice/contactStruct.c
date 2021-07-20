/*
C Programming Practice - Contact Struct
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define strip(text) {\
    for (int i = strlen(text)-1; i >= 0; i--) {\
        if (text[i] == ' ') {\
        text[i+1] = 0;\
        text[i] = '\0';\
        }\
        else\
            break;\
    }\
}

struct Date {
    short day;
    short month;
    short year;
};

struct Contact {
    char firstname[31];
    char lastname[31];
    char nickname[11];
    char tel[11];
    struct Date birthday;
};

void displayContact(struct Contact data);
struct Contact editName(struct Contact data);
struct Contact editNickname(struct Contact data);
struct Contact editTel(struct Contact data);
struct Contact editBirthday(struct Contact data);

int main() {
    /* Main function */
    struct Contact myself = {"Teerapat", "Kraisrisirikul", "Saint", "0860864192", {15, 6, 1999}};
    char cmd[32];

    while (1) {
        printf(">> ");
        scanf(" %[^\n]", cmd);
        strip(cmd);
        if (!(strcmp(cmd, "/end")))
            break;
        else if (!(strcmp(cmd, "/display")))
            displayContact(myself);
        else if (!(strcmp(cmd, "/edit")))
            printf("Usage: /edit <nickname/tel/birthday>\n");
        else if (!(strcmp(cmd, "/edit name")))
            myself = editName(myself);
        else if (!(strcmp(cmd, "/edit nickname")))
            myself = editNickname(myself);
        else if (!(strcmp(cmd, "/edit tel")))
            myself = editTel(myself);
        else if (!(strcmp(cmd, "/edit birthday")))
            myself = editBirthday(myself);
        else if (cmd[0] == '/')
            printf("Error: Command '%s' not found.\n", cmd);
        else
            printf("Error: '%s' is not a command.\n", cmd);
    }

    return 0;
}

void displayContact(struct Contact data) {
    /* Function: Display Contact */
    printf("[Contact Info]\n");
    printf("Name: %s %s\n", data.firstname, data.lastname);
    printf("Nickname: %s\n", data.nickname);
    printf("Tel: %c%c%c-%c%c%c-%c%c%c%c\n", data.tel[0], data.tel[1], data.tel[2], data.tel[3], data.tel[4], data.tel[5], data.tel[6], data.tel[7], data.tel[8], data.tel[9]);
    printf("Birthday: %02i/%02i/%i\n", data.birthday.day, data.birthday.month, data.birthday.year);
}

struct Contact editName(struct Contact data) {
    /* Function: Edit name */
    char new_firstname[31], new_lastname[31];
    printf("New Name: ");
    scanf(" %s %s", new_firstname, new_lastname);
    strcpy(data.firstname, new_firstname);
    strcpy(data.lastname, new_lastname);

    return data;
}

struct Contact editNickname(struct Contact data) {
    /* Function: Edit nickname */
    char new_nickname[11];
    printf("New Nickname: ");
    scanf(" %s", new_nickname);
    strcpy(data.nickname, new_nickname);

    return data;
}

struct Contact editTel(struct Contact data) {
    /* Function: Edit tel */
    char new_tel[11];
    printf("New Tel: ");
    scanf(" %s", new_tel);
    strcpy(data.tel, new_tel);

    return data;
}

struct Contact editBirthday(struct Contact data) {
    /* Function: Edit birthday */
    int new_day, new_month, new_year;
    printf("New Birthday: ");
    scanf("%i/%i/%i", &new_day, &new_month, &new_year);
    data.birthday.day = new_day;
    data.birthday.month = new_month;
    data.birthday.year = new_year;

    return data;
}
