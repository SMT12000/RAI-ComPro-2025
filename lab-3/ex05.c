#include <stdio.h>


int main() {
    float height, radius, volume;
    printf("Enter cone height: ");
    scanf("%f", &height);
    printf("Enter cone base radius: ");
    scanf("%f", &radius);
    volume = ((22/7.0)* radius * radius * height) / 3.0;

    printf("Cone volume = %.1f\n", volume);

    if (volume > 260) {
        printf("This cone is perfect for Supun's project\n");
    } else {
        printf("This cone is not fit for Supun's project\n");
    }

    return 0;
}