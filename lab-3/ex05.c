#include <stdio.h>
#define PI 3.141592653589793

int main() {
    float height, radius, volume;

    printf("Enter cone height: ");
    scanf("%f", &height);

    printf("Enter cone base radius: ");
    scanf("%f", &radius);

    volume = (1.0 / 3.0) * PI * radius * radius * height;

    printf("Cone volume = %.1f\n", volume);

    if (volume > 260) {
        printf("This cone is perfect for Supun project\n");
    } else {
        printf("This cone is not fit for this project\n");
    }

    return 0;
}
