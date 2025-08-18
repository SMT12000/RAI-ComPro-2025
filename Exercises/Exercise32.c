#include <stdio.h>

int main() {
    int i;

    printf("Decimal   ASCII\n");

    i = 33;
    while (i <= 55) {
        printf("%d        %c\n", i, i);
        i = i + 1;
    }

    return 0;
}
