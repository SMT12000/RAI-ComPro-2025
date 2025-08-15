#include <stdio.h>

int main() {
    int i, num;
    int sum = 0;
    float average;

    for (i = 1; i <= 10; i++) {
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = sum / 10.0;

    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", average);

    return 0;
}