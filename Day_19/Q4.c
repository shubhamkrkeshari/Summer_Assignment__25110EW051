// Question: Write a program to Find diagonal sum.

#include <stdio.h>

int main()
{
    int a[10][10];
    int n,i,j,sum=0;

    // Step 1: Enter size of square matrix
    printf("Enter size of matrix: ");
    scanf("%d",&n);

    // Step 2: Enter matrix elements
    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Step 3: Add diagonal elements
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
    }

    // Step 4: Print diagonal sum
    printf("Diagonal sum = %d",sum);

    return 0;
}