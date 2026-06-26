#include <stdio.h>

int main()
{
    int pin;
    int correctPin = 1234;
    float balance = 25000.00;
    int choice;
    float amount;
    int attempts = 0;

    printf("=== Welcome to ATM ===\n");

    while (attempts < 3)
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            break;
        }
        else
        {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3)
    {
        printf("Card blocked due to 3 wrong attempts.\n");
        return 0;
    }

    do
    {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Current Balance = Rs %.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance = balance + amount;
                printf("Rs %.2f deposited successfully.\n", amount);
                printf("New Balance = Rs %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount.\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else if (amount <= 0)
            {
                printf("Invalid amount.\n");
            }
            else
            {
                balance = balance - amount;
                printf("Rs %.2f withdrawn successfully.\n", amount);
                printf("Remaining Balance = Rs %.2f\n", balance);
            }
        }
        else if (choice == 4)
        {
            printf("Thank you for using ATM. Goodbye!\n");
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }
    while (choice != 4);

    return 0;
}
