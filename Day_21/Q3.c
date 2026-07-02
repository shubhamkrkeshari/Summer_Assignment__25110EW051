// Question: Write a program to Count vowels and consonants.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    // Step 1: Read the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Count vowels and consonants
    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
               str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    // Step 3: Display result
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}