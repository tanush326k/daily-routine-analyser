#include <stdio.h>
#include <math.h>

typedef struct {
    int study;
    int sleep;
    int exercise;
    int leisure;
} Day;

int getScore(Day d) {
    int score = 0;

    if (d.study >= 6) score += 3;
    if (d.sleep >= 6 && d.sleep <= 9) score += 3;
    if (d.exercise >= 1) score += 2;
    if (d.leisure <= 5) score += 2;

    return score;
}

void printSummary(Day d, char name[]) {
    int total = d.study + d.sleep + d.exercise + d.leisure;

    printf("\nHello %s!\n", name);
    printf("Total hours used: %d/24\n", total);
    printf("Study: %d | Sleep: %d | Exercise: %d | Leisure: %d\n",
           d.study, d.sleep, d.exercise, d.leisure);
}

int main() {
    char name[30];
    Day today;

    printf("===== DAILY ROUTINE ANALYSER (REVIVED) =====\n");
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter study hours: ");
    scanf("%d", &today.study);

    printf("Enter sleep hours: ");
    scanf("%d", &today.sleep);

    printf("Enter exercise hours: ");
    scanf("%d", &today.exercise);

    printf("Enter leisure hours: ");
    scanf("%d", &today.leisure);

    printSummary(today, name);

    int score = getScore(today);
    printf("\nDaily Score: %d/10\n", score);

    return 0;
}
