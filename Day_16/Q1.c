#include <stdio.h>

// Q: Write a program to Find maximum frequency element.
int main() {
    int arr[100], n, i, j;
    int maxElement, maxCount = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // nested loops to count frequency of each item
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // updating maximum frequency found so far
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency is %d (appears %d times)\n", maxElement, maxCount);

    return 0;
}