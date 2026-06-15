#include <stdio.h>
// WAP to find duplicates in array .

int main() {
    int arr[100], n, i, j;
    int counted[100] = {0}; // array to keep track of already printed duplicates

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            // if a match is found and it's not checked before
            if (arr[i] == arr[j] && counted[j] == 0) {
                printf("%d ", arr[i]);
                counted[j] = 1; // marking it to avoid repeating in output
                break;
            }
        }
    }
    printf("\n");

    return 0;
}