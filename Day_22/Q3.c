// Question: Write a program to Find frequency of each character.

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        if(str[i] == '*')
            continue;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '*';
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}