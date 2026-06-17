#include <stdio.h>

// Q: Write a program to Find missing number in array.
int main() {
    int arr[100], n, i;
    int expectedSum = 0, actualSum = 0, missingNumber;

    // n is the total count of numbers including the missing one
    printf("Enter the value of N (total elements expected): ");
    scanf("%d", &n);

    printf("Enter %d elements (one element missing from 1 to %d):\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum = actualSum + arr[i]; // adding elements given by user
    }

    // formula for sum of 1 to N numbers
    expectedSum = (n * (n + 1)) / 2;

    // difference gives the missing number
    missingNumber = expectedSum - actualSum;

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}