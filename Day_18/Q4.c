// Question: Write a program to Sort array in descending order

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    // Step 1: Input array size
    printf("Enter size of array: ");
    scanf("%d",&n);

    // Step 2: Input elements
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Step 3: Arrange elements in descending order
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // Step 4: Print descending array
    printf("Descending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}