#include <stdio.h>
// Q3.Write a program to find product of digits .
int main() {
    int num ;
    int d ;
    int fact =1;
    int isnegative =0;//Remember if the original number was negative. 
    
    printf ("enter the number:");
    scanf ("%d", &num );
    //If input is zero , print 0 and stop immediately .
    if (num ==0){
        printf ("%d ", 0 );
        return 0;
    }
    //If negative ,save the truth in "isnegative" and make num positive for the loop.
    if (num<0){
        isnegative =1;
        num = (-num) ;
    }
    //Loop to extract digits and multiply them .
    while (num >0 ){
        d =num %10;
        fact = fact *d ;
        num =num / 10;
    }
    // If the original number was negative ,restore the minus sign 
    if (isnegative ==1){
        fact =-fact;
    }
    printf ("the products of its digits is %d", fact );
    
    return 0 ;
}