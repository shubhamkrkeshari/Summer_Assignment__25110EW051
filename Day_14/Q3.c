#include <stdio.h>
WAP to program to second largest element .
int main() {
    int arr[100], n, i;
    int max1, max2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // initializing both max values with very low values
    max1 = arr[0];
    max2 = -999999; // assuming a very small default value

    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            // current max becomes second max
            max2 = max1;
            max1 = arr[i];
        } 
        // if element is smaller than max1 but larger than max2
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == -999999) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element is: %d\n", max2);
    }

    return 0;
}