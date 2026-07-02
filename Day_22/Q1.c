// Question: Write a program to Check palindrome string.

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    int flag = 1;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Find length of string
    while(str[length] != '\0')
    {
        length++;
    }

    // Step 3: Compare characters from both ends
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    // Step 4: Display result
    if(flag == 1)
        printf("String is Palindrome.");
    else
        printf("String is Not Palindrome.");

    return 0;
}