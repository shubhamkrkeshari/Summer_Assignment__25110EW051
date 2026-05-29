#include <stdio.h>
// Q2. Write a program to reverse a given number .
int main() {
    int num ;
    int d ; 
    
    printf ("enter the number ");
    scanf ("%d" , &num );
    // If the input number is 0 , directly print 0 .
    if (num ==0){
        printf ("%d", 0);
    }
     // If the input is negative convert it in positive then reverse .
     if(num <0){    
         num = -num ;
     } 
     // Loop to extract and print the each digit in  reverse order .
    while (num >0){
        d =num %10;// Extracts the last digit 
        printf ("%d" , d );//Prints the digit immediatly on the same line  
        num = num /10;// Removes the last digit 
    }
    return 0 ;
}