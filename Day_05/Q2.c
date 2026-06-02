#include <stdio.h>
//WAP to check strong number.
int main() {
    int num, originalNum, rem, sum = 0;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store original number for final comparison

    // Break down the number digit by digit
    while (num > 0) {
        rem = num % 10; // Get the last digit

        // Calculate the factorial of the digit
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact; // Add factorial to sum
        num /= 10;   // Remove the last digit
    }

    // A number is strong if the sum of factorials of digits equals the original number
    if (sum == originalNum && originalNum > 0) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}