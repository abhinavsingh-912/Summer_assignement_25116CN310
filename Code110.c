#include <stdio.h>

int main() {
    int accountNo;
    float balance = 0, amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    while (1) {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("₹%.2f deposited successfully.\n", amount);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 4:
                printf("Thank You for Using Bank Account System!\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}