#include <stdio.h>

int main() {
    int num_subjects;
    int scores[10000];
    float avg = 0.0;
    int bestscore = 0;

    scanf("%d", &num_subjects);

    for (int i = 0; i < num_subjects; i++) {
        scanf("%d", &scores[i]);
        avg += scores[i];
        if (scores[i] > bestscore) {
            bestscore = scores[i];
        }
    }

    avg /= num_subjects;

    printf("%.2f\n", (avg / (float)bestscore) * 100.0);

    return 0;
}
