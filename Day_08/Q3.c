#include <stdio.h>
//WAP print character triangle .
int main() {
    int rows, i, j;

    printf("Enter number of rows (e.g., 5 for A to E): ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Start printing from character 'A'
        char ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to next character
        }
        printf("\n");
    }

    return 0;
}