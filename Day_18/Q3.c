// Question: Write a program to Binary Search

#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int low, high, mid, i;

    // Step 1: Enter array size
    printf("Enter size of array: ");
    scanf("%d",&n);

    // Step 2: Enter sorted array elements
    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Step 3: Enter searching element
    printf("Enter element to search: ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    // Step 4: Binary search logic
    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
        {
            printf("Element found at position %d",mid+1);
            return 0;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    printf("Element not found");

    return 0;
}