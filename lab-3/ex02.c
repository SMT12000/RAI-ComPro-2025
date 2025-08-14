#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 100) {
        if (number % 2 == 0) {
            printf("%d is even\n", number);
        } else {
            printf("%d is odd\n", number);
        }
    } else {
        printf("%d is out of range\n", number);
    }

    return 0;
}
