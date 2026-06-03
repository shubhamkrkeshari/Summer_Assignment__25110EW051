#include <stdio.h>
// Q2: Write a program to Convert binary to decimal.

int main() {
    int binary, rem, decimal = 0, weight = 1;

    // taking binary input
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // loop to convert each digit
    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + (rem * weight);
        binary = binary / 10;
        weight = weight * 2; // multiplying base weight by 2 each time
    }

    // printing the decimal result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}