// Question: Write a program to Selection Sort

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, min, temp;

    // Step 1: Input array size
    printf("Enter size of array: ");
    scanf("%d",&n);

    // Step 2: Input elements
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Step 3: Selection sort process
    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    // Step 4: Display sorted array
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}