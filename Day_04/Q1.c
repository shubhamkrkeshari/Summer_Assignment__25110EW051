#include<stdio.h>
//Q:-Write a program to find generate the fibonacci series .
int main (){
    int n ;
    int a =0;// first term of the series 
    int b =1 ;//second term of the series
    int c ;//variable to store the next term 
    //Asking the user for the number of terms 
    printf ("enter the number of terrms ");
    scanf ("%d", &n);

    //checking if the numbber is positive 
    if (n<=0){
        printf ("enter positive integer ");
        return 0 ;
    }
    printf ("fibonacci series ");

    //Loop to calculate and print each terms of the series
    for (int i =1;i<=n;i++){
        //print the current term
        printf ("%d", a);

        //calculate the next term by adding the previous two terms 
        c=a+b;
        
        a=b; 
        b=c ; 
    }
    printf("\n");
    return 0 ;

}