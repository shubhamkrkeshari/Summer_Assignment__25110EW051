#include <stdio.h>

// Q66: Write a program to Union of arrays.
int main() {
    int arr1[50], arr2[50], i, j, n1, n2, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter first array elements:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter second array elements:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the two arrays is:\n");
    
    // first print all elements of the first array directly
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }

    // print elements of second array only if they are not in the first array
    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");

    return 0;
}