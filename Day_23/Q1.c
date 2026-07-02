// Question: Write a program to Find first non-repeating character.

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Check each character
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }

    // Step 3: If no non-repeating character found
    printf("No non-repeating character found.");

    return 0;
}