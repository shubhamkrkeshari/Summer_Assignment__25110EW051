#include<stdio.h>
//WRITE A PROGRAM TO FIND THE ARMSTRONG NUMBER .
int main (){
    int num ,originalnum,remainder ,result=0;
    printf ("enter an integer :");
    scanf ("%d",&num);
//storing  original number .
originalnum=num;

//loop to separate digits and calculate the sum of their cubes .
while (originalnum!=0){
    //get the last digit of the number 
    remainder = original %10;

    //add the cube of the digit to the result.
    result +=remainder *remainder*remainder ;
    
    //remove the last digit from the number .
    originalnum/=10;
}

    //checking if the calculated sum is equal to the original number .
    if (result==num){
        printf ("%d is an armstrong number \n", num);
    }else {
        printf ("%d is not an armstrong number \n", num);
    }
return 0 ;
}