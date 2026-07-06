// Question: Write a program to Create voting eligibility system.

#include <stdio.h>

int main()
{
    int age;

    // Step 1: Read age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Step 2: Check eligibility
    if(age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}