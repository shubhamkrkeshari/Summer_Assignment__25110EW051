#include <stdio.h>
// WAP to print reverse number triangle
int main() {
    int rows, i, j;

    printf("Enter total number of rows: ");
    scanf("%d", &rows);

    // outer loop control for total rows
    for (i = rows; i >= 1; i--) {
        // inner loop prints numbers from 1 to current row count
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}