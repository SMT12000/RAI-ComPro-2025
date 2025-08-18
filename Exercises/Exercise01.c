#include <stdio.h>

int main() {
    int num1, num2, choice, ans;
    
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Calculator Menu :\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n"); 
    printf("Choose menu : ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            ans = num1 + num2;
            printf("Ans : %d + %d = %d\n", num1, num2, ans);
            break;
        case 2:
            ans = num1 - num2;
            printf("Ans : %d - %d = %d\n", num1, num2, ans);
            break;
        case 3:
            ans = num1 * num2;
            printf("Ans : %d * %d = %d\n", num1, num2, ans);
            break;
        case 4:
            if(num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                float divAns = (float)num1 / num2;
                printf("Ans : %d / %d = %.2f\n", num1, num2, divAns);
            }
            break;
        case 5:
            if(num2 == 0) {
                printf("Error: Modulo by zero is undefined.\n");
            } else {
                ans = num1 % num2;
                printf("Ans : %d %% %d = %d\n", num1, num2, ans);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}
