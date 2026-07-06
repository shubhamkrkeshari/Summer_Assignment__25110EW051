// Question: Write a program to Find longest word.

#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0;
    int max = 0, len = 0;

    // Step 1: Read sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Find longest word
    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;

                for(j = 0; j < len; j++)
                {
                    longest[j] = str[i - len + j];
                }

                longest[len] = '\0';
            }

            len = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    // Step 3: Display result
    printf("Longest word = %s", longest);

    return 0;
}