#include <stdio.h>

int reverse = 0; // global variable to store the reversed number

// Function to reverse a number using recursion
void reverseNum(int n) {
    if (n == 0) {
        return;
    }
    int rem = n % 10;
    reverse = reverse * 10 + rem;
    reverseNum(n / 10);
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Reversed number: 0\n");
    } else {
        reverseNum(num);
        printf("Reversed number: %d\n", reverse);
    }

    return 0;
}