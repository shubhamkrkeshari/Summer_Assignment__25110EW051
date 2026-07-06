// Question: Write a program to Create marksheet generation system.

#include <stdio.h>

int main()
{
    char name[50];
    float m1, m2, m3, total, percentage;

    // Step 1: Read student details
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    // Step 2: Calculate total and percentage
    total = m1 + m2 + m3;
    percentage = total / 3;

    // Step 3: Display marksheet
    printf("\n------ Marksheet ------\n");
    printf("Name       : %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if(percentage >= 40)
        printf("Result     : Pass");
    else
        printf("Result     : Fail");

    return 0;
}