// Question: Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>

void displayStudents(int roll[], char name[][30], float marks[], int n);

int main()
{
    int roll[5];
    char name[5][30];
    float marks[5];
    int i;

    // Step 1: Read student details
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Student %d Details\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Step 2: Call function to display records
    displayStudents(roll, name, marks, 5);

    return 0;
}

// Function to display all student records
void displayStudents(int roll[], char name[][30], float marks[], int n)
{
    int i;

    printf("\n------ Student Report ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n", marks[i]);
    }
}