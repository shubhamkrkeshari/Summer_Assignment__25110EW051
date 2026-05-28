#include <stdio.h>

int main (){
    int n ;
    int sum =0;
    //take inetger input from user 

    printf ("enter the natural number");
    scanf ("%d", &n );
   // check if the entered number is positive natural number 

    if (n>0){
        //loop from 1 to n to calculate the cumulative sum 

        for (int i=1 ;i <=n; i++ ){
          sum =sum +i ;
        }
        //print the final calculated sum after the loop finishes 
          printf ("the sum of 1st natural number is :%d" , sum );
        
    }
    //execute this if the input is 0 or a negative number 
    else {
        printf ("the enter number is not natural");
        
    }
return 0 ;
}

