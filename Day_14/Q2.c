#include <stdio.h>
//WAP to frequency of an element .
int main() {
    int arr[100], n, i, target, count = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find its frequency: ");
    scanf("%d", &target);

    // counting how many times target appears
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Frequency of %d is: %d\n", target, count);

    return 0;
}