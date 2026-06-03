#include <stdio.h>
// Q1: Write a program to Convert decimal to binary.

int main() {
    int num, rem, binary = 0, place = 1;

    // taking input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary equivalent: ");
    
    // handling edge case for 0
    if (num == 0) {
        printf("0\n");
        return 0;
    }

    // converting decimal to binary
    while (num > 0) {
        rem = num % 2;
        binary = binary + (rem * place);
        num = num / 2;
        place = place * 10;
    }

    // printing the final answer
    printf("%d\n", binary);

    return 0;
}