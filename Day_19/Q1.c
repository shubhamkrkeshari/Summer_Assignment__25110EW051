// Question: Write a program to Add matrices.

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    // Step 1: Enter rows and columns
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    // Step 2: Enter first matrix
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Step 3: Enter second matrix
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    // Step 4: Add both matrices
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    // Step 5: Display result
    printf("Addition of matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}