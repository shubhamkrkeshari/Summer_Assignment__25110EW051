// Question: Write a program to Reverse a string.

#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, length = 0;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Find length
    while(str[length] != '\0')
    {
        length++;
    }

    // Step 3: Store reverse string
    for(i = 0; i < length; i++)
    {
        rev[i] = str[length - i - 1];
    }

    rev[i] = '\0';

    // Step 4: Display reversed string
    printf("Reversed string = %s", rev);

    return 0;
}