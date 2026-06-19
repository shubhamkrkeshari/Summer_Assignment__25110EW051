#include <stdio.h>

// Q68: Write a program to Find common elements.
int main() {
    int a[50], b[50], size1, size2, i, j;

    printf("Enter number of elements for Array A: ");
    scanf("%d", &size1);
    printf("Enter Array A items:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements for Array B: ");
    scanf("%d", &size2);
    printf("Enter Array B items:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements are: ");
    // checking common values between array A and array B
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}