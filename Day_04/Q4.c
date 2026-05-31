#include<stdio.h>
//WAP TO FIND TO PRINT ARMSTRONG NUMBER IN A RANGE .
int main (){
    int start,end ,num,originalnum,remainder,result;
    printf ("enter the starting number of the range :");
    scanf ("%d, &start");
    printf("enter the ending number of the range :");
    scanf ("%d", &end);
printf ("armstrong numbers between %d and %d are :\n",start ,end );

//loop for check each number in the given range 
for (int i =start ;i<=end ;i++){
    num =i ;
    originalnum=num;
    result =0 ;

    //loop for to calculate the sum of cubes of digits .
    while (originalnum!=0){
        remainder =originalnum%10;
        result +=remainder *remainder *remainder;
        originalnum/=10;        
    }
    //if the sum of cubes matches the number , it is an armstrong number .
    if (result ==num){
        printf("%d", num);
    }
}
printf("\n");
return 0 ;
}