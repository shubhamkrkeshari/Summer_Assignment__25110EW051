#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int num)
{
    int original, rem, sum = 0;

    original = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}