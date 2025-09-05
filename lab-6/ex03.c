#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p1, p2;
    float dx, dy, sum, distance, guess;

    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    dx = p2.x - p1.x;
    dy = p2.y - p1.y;
    sum = dx * dx + dy * dy;

    distance = sum / 2.0;
    guess = 0.0;

    while (distance - guess > 0.0001 || guess - distance > 0.0001) {
        guess = distance;
        distance = (guess + sum / guess) / 2.0;
    }

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}
