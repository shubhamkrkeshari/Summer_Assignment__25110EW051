// Question: Write a program to Find string length without strlen()

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Count characters
    while(str[i] != '\0')
    {
        length++;
        i++;
    }

    // Step 3: Display length
    printf("Length of string = %d", length);

    return 0;
}