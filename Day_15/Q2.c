#include <stdio.h>

// Q: Write a program to Rotate array left.
int main() {
    int arr[100], n, i, first;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // saving the first element safely before shifting
    first = arr[0];

    // shifting all other elements one step to the left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // putting the first element at the last index
    arr[n - 1] = first;

    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}