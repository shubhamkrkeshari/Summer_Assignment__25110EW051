#include <stdio.h>

// Q65: Write a program to Merge arrays.
int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[k] = arr1[i]; // copy first array elements to merged array
        k++;
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[k] = arr2[i]; // copy second array elements right after first one
        k++;
    }

    printf("The combined merged array is:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}