#include <stdio.h>

//Q : Write a program to Reverse array.
int main() {
    int arr[100], n, i, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swapping elements from start and end using a simple loop
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}