// Question: Write a program to Convert lowercase to uppercase.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Convert lowercase letters to uppercase
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Step 3: Display result
    printf("Uppercase string = %s", str);

    return 0;
}