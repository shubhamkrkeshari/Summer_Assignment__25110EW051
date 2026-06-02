#include <stdio.h>
//WAP to check perfect number.
int main() {
    int num, sum = 0;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find all proper divisors and add them together
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; // i is a divisor, add it to sum
        }
    }

    // A number is perfect if the sum of its divisors equals the number itself
    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}