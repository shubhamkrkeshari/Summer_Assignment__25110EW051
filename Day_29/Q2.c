// Question: Write a program to Create menu-driven array operations system.

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, sum = 0;

    // Step 1: Read array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Step 2: Display menu
    printf("\n1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Element\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Step 3: Perform operation
    switch(choice)
    {
        case 1:

            printf("Array Elements:\n");

            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);

            break;

        case 2:

            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);

            break;

        case 3:

        {
            int max = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }

            printf("Largest Element = %d", max);

            break;
        }

        default:
            printf("Invalid Choice.");
    }

    return 0;
}