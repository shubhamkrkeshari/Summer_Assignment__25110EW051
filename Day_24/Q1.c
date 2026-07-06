// Question: Write a program to Check string rotation.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    // Step 1: Read both strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Step 2: Check length
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not rotations.");
        return 0;
    }

    // Step 3: Join first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 4: Check rotation
    if(strstr(temp, str2))
        printf("Strings are rotations.");
    else
        printf("Strings are not rotations.");

    return 0;
}