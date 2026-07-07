// Question: Write a program to Create student record system using arrays and strings.

#include <stdio.h>

int main()
{
    int roll[5];
    char name[5][30];
    float marks[5];
    int i;

    // Step 1: Read details of 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Step 2: Display all records
    printf("\n----- Student Records -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n", marks[i]);
    }

    return 0;
}