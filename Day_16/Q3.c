#include <stdio.h>

// Q: Write a program to Remove duplicates from array.
int main() {
    int arr[100], n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // loop to pick each element one by one
    for (i = 0; i < n; i++) {
        // loop to scan for duplicate values ahead
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // shifting elements left to overwrite the duplicate item
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // size reduces as item is deleted
                j--; // check the same index again since elements shifted
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}