// Question: Write a program to Subtract matrices.

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int r,c,i,j;

    // Step 1: Input matrix size
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    // Step 2: Input first matrix
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Step 3: Input second matrix
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    // Step 4: Subtract matrices
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }

    // Step 5: Print result
    printf("Subtraction of matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}