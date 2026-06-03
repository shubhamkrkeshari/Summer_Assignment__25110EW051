#include <stdio.h>
// Q3: Write a program to Count set bits in a number.

int main() {
    int n, temp, count = 0;

    // taking integer input
    printf("Enter any number: ");
    scanf("%d", &n);

    temp = n; // storing original value

    // checking bits one by one
    while (temp > 0) {
        if (temp % 2 == 1) {
            count++; // increment if bit is 1
        }
        temp = temp / 2;
    }

    // final count output
    printf("Total set bits (1s) in %d is: %d\n", n, count);

    return 0;
}