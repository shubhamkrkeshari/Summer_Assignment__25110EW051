#include <stdio.h>

// Function to find factorial using recursion
int findFactorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive call
    return n * findFactorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        int fact = findFactorial(num);
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}