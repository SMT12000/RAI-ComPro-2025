#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter a number : ");
        scanf("%d", &num);

        sum = sum + num;

    } while (num != 0);

    printf("Result : %d\n", sum);

    return 0;
}
