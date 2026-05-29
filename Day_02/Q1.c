#include <stdio.h>
//Q1. Write a program to find sum of digits of a number .

int main() {
    int num; 
    int sum =0;
    int d ; // declared variable (d) to store each digit
    printf ("enter the number ");
    scanf ("%d", &num );
    
    //this loop runs repeatedly as long as num is greater than 0
    while (num >0){
        d =num %10 ; //Extracts the last digit of the number 
     sum =sum +d ;// Adds the extracted digit to the sum 
     num =num /10;// Remove the last digit from the number 
    }
    // Prints the final sum of the digits 
    printf ("the sum of given digits of a given number %d", sum );
    return 0;
}