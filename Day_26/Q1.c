// Question: Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>

int main()
{
    char word[5][30], temp[30];
    int i, j;

    // Step 1: Read words
    printf("Enter 5 words:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%s", word[i]);
    }

    // Step 2: Sort according to length
    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    // Step 3: Display sorted words
    printf("Words sorted by length:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}