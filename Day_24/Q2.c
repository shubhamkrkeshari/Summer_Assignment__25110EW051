// Question: Write a program to Compress a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Compress string
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}