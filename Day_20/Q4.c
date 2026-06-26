// Question: Write a program to Find column-wise sum.

#include <stdio.h>

int main()
{
    int a[10][10];
    int r,c,i,j,sum;

    // Step 1: Enter matrix size
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    // Step 2: Input matrix elements
    printf("Enter matrix elements:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Step 3: Calculate column sum
    for(j=0;j<c;j++)
    {
        sum=0;

        for(i=0;i<r;i++)
        {
            sum=sum+a[i][j];
        }

        printf("Sum of column %d = %d\n",j+1,sum);
    }

    return 0;
}