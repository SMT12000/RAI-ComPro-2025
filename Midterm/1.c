#include <stdio.h>

void toBinary(int n) {
    int i;
    for(i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int numbers[] = {19, 85, 1961, 118, 127, 25, 59};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    printf("Decimal\tBinary\t\tHexadecimal\n");
    for(i = 0; i < size; i++) {
        printf("%d\t", numbers[i]);
        toBinary(numbers[i]);
        printf("\t%X\n", numbers[i]);
    }

    return 0;
}
