#include <stdio.h>

int main() {
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int temp;

    for(int i = 0; i < length / 2; i++) {
        temp = numbers[i];
        numbers[i] = numbers[length - 1 - i];
        numbers[length - 1 - i] = temp;
    }

    printf("Reversed Array: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
