#include <stdio.h>
// WAP to print hollow square pattern 
int main() {
    int size, i, j;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            // print star only at borders (first/last row or first/last column)
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                // print spaces inside the square block
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}