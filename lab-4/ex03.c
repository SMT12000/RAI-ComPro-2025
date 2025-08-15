#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }

        printf("Enter the number: ");
        scanf("%d", &num);
    }

    printf("Exiting Program... Bye\n");
    return 0;
}
