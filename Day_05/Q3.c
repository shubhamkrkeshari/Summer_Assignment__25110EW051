#include <stdio.h>
//WAP to print factors of a number .
int main() {
    int num;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop from 1 up to the number itself
    for (int i = 1; i <= num; i++) {
        // If num is perfectly divisible by i, then i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}