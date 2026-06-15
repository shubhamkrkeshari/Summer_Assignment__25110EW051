#include <stdio.h>
// WAP to linear search.
int main() {
    int arr[100], n, i, target, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &target);

    // loop to check each element one by one
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break; // stop searching once found
        }
    }

    if (found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}