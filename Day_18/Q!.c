// Question: Write a program to Bubble Sort

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    // Step 1: Take size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Step 2: Take array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Step 3: Apply bubble sort logic
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Step 4: Print sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}