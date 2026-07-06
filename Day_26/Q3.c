// Question: Write a program to Create ATM simulation.

#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount;

    // Step 1: Display menu
    printf("------ ATM MENU ------\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Step 2: Perform selected operation
    switch(choice)
    {
        case 1:
            printf("Current Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Remaining Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance.");
            }
            break;

        default:
            printf("Invalid Choice.");
    }

    return 0;
}