#include <stdio.h>

// Q: Write a program to Rotate array right.
int main() {
    int arr[100], n, i, last;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // storing the last element first
    last = arr[n - 1];

    // shifting elements to the right from backwards
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // bringing back the last element to index 0
    arr[0] = last;

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}