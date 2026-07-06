// Question: Write a program to Remove duplicate characters.

#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Remove duplicate characters
    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0';)
        {
            if(str[i] == str[j])
            {
                int k;

                for(k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    // Step 3: Display result
    printf("String after removing duplicates = %s", str);

    return 0;
}