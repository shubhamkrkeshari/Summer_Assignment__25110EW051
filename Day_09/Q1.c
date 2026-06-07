#include <stdio.h>
//WAP to print reverse star pattern 
int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // loop starts from max rows and goes down to 1
    for (i = rows; i >= 1; i--) {
        // printing stars based on the current row value
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // skipping to the next line
        printf("\n");
    }

    return 0;
}