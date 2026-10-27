#include <stdio.h>

int main() {
    int n, score;
    int highest = 0, lowest = 50;
    int total = 0;

    printf("Enter number of examinees: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter score of examinee %d (0-50): ", i);
        scanf("%d", &score);

        if (score < 0 || score > 50) {
            printf("Invalid score! Try again.\n");
            i--;
            continue;
        }

        if (score >= 30) {
            printf("Examinee %d: PASSED\n", i);
        } else {
            printf("Examinee %d: FAILED\n", i);
        }

        if (score > highest) {
            highest = score;
        }

        if (score < lowest) {
            lowest = score;
        }

        total += score;
    }

    printf("\n--- EXAM RESULTS ---\n");
    printf("Highest score: %d\n", highest);
    printf("Lowest score: %d\n", lowest);
    printf("Average score: %.2f\n", (float)total / n);


    return 0;
}