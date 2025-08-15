#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);

    while (i <= 12) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
