#include <stdio.h>

int main() {
    int i;

    i = 0;
    do {
        i += 3;
        printf("%d ", i);
    } while (i % 3 == 0);

    return 0;
}
