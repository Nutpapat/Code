/*
Computer Programming
Final Examination Solution - Bad Genius
By Teerapat K.
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char pattern[8];
    int score;
};

int main() {
    /* Main function */
    // Step I: Setting up data
    struct Student lin   = {"ABC", 0};
    struct Student grace = {"BCBA", 0};
    struct Student pat   = {"CCAABB", 0};

    int question;
    char answer[64];
    scanf("%i %s", &question, answer);

    // Step II: Score Calculation
    for (int i = 0; i < question; i++) {
        if (answer[i] == lin.pattern[i % strlen(lin.pattern)])
            lin.score++;
        if (answer[i] == grace.pattern[i % strlen(grace.pattern)])
            grace.score++;
        if (answer[i] == pat.pattern[i % strlen(pat.pattern)])
            pat.score++;
    }

    // Step III: Find the top score
    int top_score = lin.score;
    if (grace.score > top_score)
        top_score = grace.score;
    if (pat.score > top_score)
        top_score = pat.score;

    // Step IV: Output
    printf("%i\n", top_score);
    if (lin.score == top_score)
        printf("Lin\n");
    if (grace.score == top_score)
        printf("Grace\n");
    if (pat.score == top_score)
        printf("Pat\n");

    return 0;
}
