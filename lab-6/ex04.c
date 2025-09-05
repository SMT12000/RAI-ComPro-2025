#include <stdio.h>

typedef struct {
    float x;
    float y;
} Vector;

int main() {
    Vector u, v, result;

    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);

    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_y: ");
    scanf("%f", &v.y);

    result.x = u.x + v.x;
    result.y = u.y + v.y;

    printf("Resultant vector is equivalence to %.1fi + %.1fj\n",
           result.x, result.y);

    return 0;
}
