#include <stdio.h>

int main() {
    int numbers[8];
    int i;
    int smallest, largest;

    for (i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    smallest = largest = numbers[0];
    for (i = 1; i < 8; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}