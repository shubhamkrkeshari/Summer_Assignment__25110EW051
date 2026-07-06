// Question: Write a program to Create Ticket Booking System.

#include <stdio.h>

int main()
{
    char name[50];
    int seats;
    float price, total;

    // Step 1: Read passenger details
    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &seats);

    printf("Enter Ticket Price: ");
    scanf("%f", &price);

    // Step 2: Calculate total amount
    total = seats * price;

    // Step 3: Display booking details
    printf("\n------ Ticket Details ------\n");
    printf("Passenger Name : %s\n", name);
    printf("Tickets Booked : %d\n", seats);
    printf("Total Amount   : %.2f\n", total);

    return 0;
}