#include <stdio.h>
//WAP to print star pyramid .
int main() {
    int rows, i, j, space;

    printf("Enter number of rows for pyramid: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // loop to print empty spaces before stars
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // loop to print odd number of stars (1, 3, 5, 7...)
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        
        // move to next line
        printf("\n");
    }

    return 0;
}