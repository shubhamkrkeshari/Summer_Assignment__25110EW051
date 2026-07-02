// Question: Write a program to Find maximum occurring character.

#include <stdio.h>

int main()
{
    char str[100], ch;
    int freq[256] = {0};
    int i, max = 0;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Count frequency of every character
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    // Step 3: Find maximum occurring character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(freq[(int)str[i]] > max)
        {
            max = freq[(int)str[i]];
            ch = str[i];
        }
    }

    // Step 4: Display result
    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d", max);

    return 0;
}