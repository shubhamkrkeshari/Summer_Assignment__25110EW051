#include <stdio.h>
int main ()
//variable to store the number entered by the user 
    int n ;
    int fact ;
    //prompt the user to enter a number 
    printf ("enter the value of n ");
    scanf ("%d", &n);
    //loop runs 10 times from  i=1 to 10 to generate multiplication table .
    for (int i = 1 ; i <=10 ; i ++){
     int fact = i *n ;
     //prints the table in a clean format 
    printf ("%d*%d=%d\n",n,i,fact );
    }
    return 0 ;
    
}