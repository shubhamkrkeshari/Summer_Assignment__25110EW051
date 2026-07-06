// Question: Write a program to Create Contact Management System.

#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct Contact c;

    // Step 1: Read contact details
    printf("Enter Contact Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    // Step 2: Display contact details
    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", c.name);
    printf("Phone Number : %s\n", c.phone);

    return 0;
}