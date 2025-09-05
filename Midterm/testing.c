#include <stdio.h>

int main() {
    int num, reversed = 0;
    int original = num; 

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;           
        reversed = reversed * 10 + digit;      
       num = num / 10;               
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
