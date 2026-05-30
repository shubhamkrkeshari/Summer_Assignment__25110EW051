#include<stdio.h>
int main (){
int start ;
int end ;
int num ;
int div ;
printf ("Enter start value ");
scanf ("%d", &start );
printf ("enter end value ");
scanf ("%d", &end );\
// Loop through each number in the given range .
for (num=start ;num<=end ;num++){
    // Numbers less than or equal to 1 are not prime .
    if (num<=1){
        continue ;
    }
}
int check =1;//Assume number is prime .
//Check for factors from 2 up to the square root of the number .
for (div =2;div*div<=num;div++){
    if (num %div ==0){
        check =0;
        break ;
    }
}
//If check is still 1, the number is prime .
if (check ==1){
    printf ("%d", num );
}
return 0 ;
}