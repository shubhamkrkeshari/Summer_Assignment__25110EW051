#include<stdio.h>
//Q:-Write a program to find LCM of two numbers .
int main (){
    int num1,num2,small,i;\
    int gcd =1;
    int lcm;
    printf("Enter two numbers ");
    scanf ("%d%d", &num1,&num2);
    //Find the smaller number to run the loop 
    if (num1<num2){
        small=num1;
    }
    else {
        small =  num2;
    }
    //Loop backwards to find GCD first .
    for (i = small;i>=1;i--){
        if (num1%i==0&& num2%i==0){
            gcd =i;
            break ;
        }
    }
    //Formula :(num1*num2)/GCD
    lcm=(num1*num2)/gcd;
    printf ("LCM is :%d\n",lcm);
    return 0 ;
    
}