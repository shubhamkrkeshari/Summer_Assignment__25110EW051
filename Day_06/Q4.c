#include <stdio.h>
// Q4: Write a program to Find x^n without pow().

int main() {
    int base, exp;
    long long result = 1;

    // input for base and power
    printf("Enter base (x): ");
    scanf("%d", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exp);

    // running a loop n times to multiply base
    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }

    // printing the calculated power
    printf("%d raised to the power %d is: %lld\n", base, exp, result);

    return 0;
}