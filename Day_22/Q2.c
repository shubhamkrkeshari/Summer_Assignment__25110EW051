// Question: Write a program to Count words in a sentence.

#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, words = 1;

    // Step 1: Read the sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Count spaces
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
        }
        i++;
    }

    // Step 3: Display total words
    printf("Total words = %d", words);

    return 0;
}