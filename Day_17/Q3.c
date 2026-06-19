#include <stdio.h>

// Q67: Write a program to Intersection of arrays.
int main() {
    int arr1[50], arr2[50], i, j, n1, n2;

    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter array 1 elements:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter array 2 elements:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection of the arrays:\n");
    // match each element of array 1 with array 2
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // element found common, stop tracking further for this item
            }
        }
    }
    printf("\n");

    return 0;
}