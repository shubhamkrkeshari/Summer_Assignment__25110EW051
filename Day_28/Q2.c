// Question: Write a program to Create Bank Account System.

#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank customer;
    float amount;

    // Step 1: Read account details
    printf("Enter Account Number: ");
    scanf("%d", &customer.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", customer.name);

    printf("Enter Current Balance: ");
    scanf("%f", &customer.balance);

    // Step 2: Deposit amount
    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    customer.balance = customer.balance + amount;

    // Step 3: Display updated account details
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", customer.accNo);
    printf("Account Holder : %s\n", customer.name);
    printf("Available Balance : %.2f\n", customer.balance);

    return 0;
}