// Question: Write a program to Check symmetric matrix.

#include <stdio.h>

int main()
{
    int a[10][10];
    int n,i,j,flag=1;

    // Step 1: Enter matrix size
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

    // Step 3: Compare matrix with transpose
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
            }
        }
    }

    // Step 4: Print result
    if(flag==1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}