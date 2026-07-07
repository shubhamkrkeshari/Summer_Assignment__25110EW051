// Question: Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    // Step 1: Read string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Display menu
    printf("\n1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Step 3: Perform selected operation
    switch(choice)
    {
        case 1:

            printf("Length = %d", strlen(str));
            break;

        case 2:

        {
            int i;

            printf("Reverse = ");

            for(i = strlen(str) - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }

            break;
        }

        case 3:

        {
            int i;

            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
            }

            printf("Uppercase = %s", str);

            break;
        }

        default:

            printf("Invalid Choice.");
    }

    return 0;
}