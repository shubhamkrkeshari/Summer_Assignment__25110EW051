// Question: Write a program to Create mini library system.

#include <stdio.h>

struct Book
{
    int id;
    char title[30];
    char author[30];
};

int main()
{
    struct Book b[3];
    int i;

    // Step 1: Read book details
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Book %d Details\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    // Step 2: Display records
    printf("\n----- Library Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", b[i].id);
        printf("Title   : %s\n", b[i].title);
        printf("Author  : %s\n", b[i].author);
    }

    return 0;
}