#include <stdio.h>

// Function to get nth Fibonacci number
int fibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int terms, i;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}