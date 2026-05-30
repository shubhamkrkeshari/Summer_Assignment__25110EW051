#include<stdio.h>
//Q:-Write a program to find gcd of two numbers .
int main (){
    int num1,num2,small,i;
    int gcd =1;
    printf ("Enter two numbers :");
    scanf ("%d %d", &num1,&num2);
    //Find the smaller numberr between the two 
    if (num1<num2){
        small=num1;
    }else {
        small =num2;
    }
    //Loop backwards from small number down to 1.
    for (i=small ;i>=1; i--){
        //Check if i divides both numbers completely .
        if (num1 %i==0&& num2 %i==0){
            gcd=i;//Save the highest common factor 
            break;//Stop the loop immediately 
        }
    }
printf ("GCD is :%d\n", gcd);
return 0 ;
}