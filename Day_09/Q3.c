#include <stdio.h>
// WAP to print repeated character pattern 
int main() {
    int rows, i, j;

    printf("Enter rows count: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // character changes based on the row number (1 -> A, 2 -> B...)
        char letter = 'A' + (i - 1);
        
        for (j = 1; j <= i; j++) {
            printf("%c ", letter);
        }
        printf("\n");
    }

    return 0;
}