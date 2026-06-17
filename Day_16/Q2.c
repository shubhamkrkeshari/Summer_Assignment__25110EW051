#include <stdio.h>

// Q: Write a program to Find pair with given sum.
int main() {
    int arr[100], n, i, j, targetSum, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum to find: ");
    scanf("%d", &targetSum);

    printf("Pairs found:\n");
    // checking every possible pair using two pointers/loops
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No pair exists with the given sum.\n");
    }

    return 0;
}