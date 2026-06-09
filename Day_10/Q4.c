#include <stdio.h>
//WAP to print character pyramid .
int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // printing spaces for alignment
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // print characters increasing from 'A'
        char ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        // fixing character pointer to print in reverse
        ch = ch - 2; 
        
        // print characters decreasing back to 'A'
        for (j = 1; j < i; j++) {
            printf("%c", ch);
            ch--;
        }
        
        printf("\n");
    }

    return 0;
}