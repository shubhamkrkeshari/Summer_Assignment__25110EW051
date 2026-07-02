// Question: Write a program to Find first repeating character.

#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Find first repeating character
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                printf("First repeating character = %c", str[i]);
                return 0;
            }
        }
    }

    // Step 3: If no repeating character found
    printf("No repeating character found.");

    return 0;
}