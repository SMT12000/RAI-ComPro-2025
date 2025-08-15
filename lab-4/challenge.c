#include <stdio.h>

int main() {
    int choice;
    double balance = 0.0;
    double amount;

    do {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Current Balance: %.2f\n", balance);
        } 
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Deposit successful.\n");
            } else {
                printf("Invalid amount. Please try again.\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful.\n");
            } else {
                printf("Insufficient balance or invalid amount.\n");
            }
        } 
        else if (choice == 4) {
            printf("Thank you for using the ATM.\n");
        } 
        else {
            printf("Invalid option. Please choose 1-4.\n");
        }

    } while (choice != 4);

    return 0;
}
