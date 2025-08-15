#include <stdio.h>

int main() {
    int count = 1;
    int num, sum = 0;

    while (count <= 10) {
        printf("%d.Enter the number: ", count);
        scanf("%d", &num);
        sum += num;
        count++;
    }

    printf("Total sum is %d\n", sum);

    return 0;
}