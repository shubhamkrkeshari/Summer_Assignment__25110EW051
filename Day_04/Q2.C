#include<stdio.h>
// WRITE A PROGRAM TO FIND THE NTH TERM OF FIBONACCI SERIES .
int main (){
    int n ;
    int a =0;
    int b =1;
    int c ;
    

    printf ("enter the position (n) to find the nth fibonacci term ");
    scanf ("%d",&n);

    //handling the first term directly 
    if (n==1){
        printf ("the 1st fibonacci term is :%d\n", a);
        return 0 ;
    }
    //handling the 2nd term directly 
    if (n==2){
        printf ("the 2nd fibonacci term is :%d\n",b);
        return 0 ;
    }
    //if user enters 0 or negative numbers 
    if (n<=0){
        printf ("enter a positive number greater than 0 \n");
        return 0;

    }
    //loop starts from 3 beacause we already know the 1st and 2nd terms 
    for (int i =3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
//after the looop finishes , b (or c ) will hold the nth term 
printf ("the %dth fibonacci term is :%d\n",n,b);
return 0 ;

}