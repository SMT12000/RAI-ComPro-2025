#include <stdio.h>
#include <math.h> // for sqrt() and pow()

// Define a struct for coordinates
typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p1, p2;
    float distance;

    // Input coordinates
    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    // Calculate distance using the distance formula
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    // Print result
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}
