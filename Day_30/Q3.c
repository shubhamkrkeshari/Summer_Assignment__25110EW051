// Question: Write a program to Create mini employee management system.

#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee emp[3];
    int i;

    // Step 1: Read employee details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Employee %d Details\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Step 2: Display employee details
    printf("\n----- Employee Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", emp[i].id);
        printf("Name   : %s\n", emp[i].name);
        printf("Salary : %.2f\n", emp[i].salary);
    }

    return 0;
}