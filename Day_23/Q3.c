// Question: Write a program to Check anagram strings.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;
    int count1[256] = {0};
    int count2[256] = {0};

    // Step 1: Read both strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Step 2: Count frequency of characters
    for(i = 0; str1[i] != '\0'; i++)
    {
        count1[(int)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        count2[(int)str2[i]]++;
    }

    // Step 3: Compare both frequency arrays
    for(i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            printf("Strings are not anagrams.");
            return 0;
        }
    }

    // Step 4: Display result
    printf("Strings are anagrams.");

    return 0;
}