// Question: Write a program to Create menu-driven calculator.

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    // Step 1: Read two numbers
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    // Step 2: Display menu
    printf("\n----- Calculator Menu -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Step 3: Perform selected operation
    switch(choice)
    {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid Choice.");
    }

    return 0;
}