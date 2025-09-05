#include <stdio.h>

typedef struct {
    int minute;
    int second;
} Time;

int main() {
    Time t[3];
    int totalSeconds = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &t[i].minute, &t[i].second);
        totalSeconds += t[i].minute * 60 + t[i].second;
    }

    printf("Total time elasped: %d second(s)\n", totalSeconds);

    return 0;
}
