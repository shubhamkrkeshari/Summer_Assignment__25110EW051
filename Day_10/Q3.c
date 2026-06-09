#include <stdio.h>
//WAP to print number pyramid .
int main() {
    int rows, i, j, space;

    printf("Enter pyramid height: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // printing the initial spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // printing numbers in increasing order up to 'i'
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // printing numbers in decreasing order back to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }

    return 0;
}