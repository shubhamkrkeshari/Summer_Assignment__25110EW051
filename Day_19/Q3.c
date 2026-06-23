// Question: Write a program to Transpose matrix.

#include <stdio.h>

int main()
{
    int a[10][10], trans[10][10];
    int r,c,i,j;

    // Step 1: Enter matrix size
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    // Step 2: Enter matrix elements
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Step 3: Find transpose
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=a[i][j];
        }
    }

    // Step 4: Display transpose matrix
    printf("Transpose matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}