#include <stdio.h>
//WAP to print half pyramid pattern .
int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for(i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}