#include <stdio.h>

// Q: Write a program to Move zeroes to end.
int main() {
    int arr[100], n, i, count = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter components:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // shifting all non-zero numbers to the front positions
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // filling up the remaining empty spots at the end with zeros
    while (count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Result array after moving zeros:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}