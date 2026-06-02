#include <stdio.h>
//WAP to find largest prime factor .
int main() {
    int num, originalNum, maxPrime = -1;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for the final print

    // Divide by 2 repeatedly to remove all even factors
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // num must be odd at this point, so we skip even numbers (i += 2)
    for (int i = 3; i * i <= num; i += 2) {
        // While i divides num, divide num and update