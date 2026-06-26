// Question: Write a program to Find row-wise sum.

#include <stdio.h>

int main()
{
    int a[10][10];
    int r,c,i,j,sum;

    // Step 1: Enter rows and columns
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    // Step 2: Input matrix
    printf("Enter matrix elements:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Step 3: Calculate row sum
    for(i=0;i<r;i++)
    {
        sum=0;

        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }

        printf("Sum of row %d = %d\n",i+1,sum);
    }

    return 0;
}