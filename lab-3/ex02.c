#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ( num > 100) {
        printf("%d is out of range.\n",num);
    } else {
        if (num % 2 == 0) {
            printf("The number is even\n");
        } else {
            printf("The number is odd\n");
        }
    }

    return 0;
}



