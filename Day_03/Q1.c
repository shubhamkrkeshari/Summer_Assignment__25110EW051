#include <stdio.h>
//Q:- Write a program to check whether a number is prime .
int main() {
 int num ;
 int i ;
 
 printf ("enter the number ");
 scanf ("%d", &num );
 //Number less than 0  or equal to 1 is not prime .
 if (num <=1){
     printf ("the number is not prime ");
     return 0;
 }
   //Loop starts from 2 and runs up to the square root of the number .
       for (i =2; i*i<=num ; i++){\
       //If the number is perfectly divisible by i .
          if (num%i ==0){
              printf ("the given number is not prime ");
              return 0;
          }
       }
 //If the loop finishes completely without hitting the "return 0 " inside .
 
 //it means the number has no factor other than 1 and itself meaning it is prime .
            printf ("the given number is prime number ");
   return 0 ;          
        }  

