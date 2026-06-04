
#include <stdio.h>

// Function to calculate sum of digits recursively
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    // Last digit + remaining digits sum
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    // handling negative numbers just in case
    if (num < 0) {
        num = -num;
    }

    int totalSum = sumOfDigits(num);
    printf("Sum of digits: %d\n", totalSum);

    return 0;
}