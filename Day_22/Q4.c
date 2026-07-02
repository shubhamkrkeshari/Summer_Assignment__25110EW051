// Question: Write a program to Remove spaces from a string.

#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;
    char result[200];

    // Step 1: Read the sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Copy only non-space characters
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    // Step 3: Display updated string
    printf("String without spaces:\n%s", result);

    return 0;
}