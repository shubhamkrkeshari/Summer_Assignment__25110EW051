#include <stdio.h>
//WAP to print reverse pyramid .
int main() {
    int rows, i, j, space;

    printf("Enter total rows: ");
    scanf("%d", &rows);

    // outer loop runs backwards from max rows to 1
    for (i = rows; i >= 1; i--) {
        // loop to print spaces on the left side
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // loop to print stars in decreasing odd numbers
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}