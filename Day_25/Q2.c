// Question: Write a program to Find common characters in strings.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    // Step 1: Read both strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Step 2: Find common characters
    printf("Common Characters: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}