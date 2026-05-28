#include <stdio.h>

int main (){
    int num ;
    int count =0;
    printf ("enter the number ");
    scanf ("%d", &num);
    //if input is 0 ,digit count is 1 
    if (num==0){
        count =1;
    }
    else {
        //convert negative number to positive 
        if (num <0){
            num =-num ;
        }
    }
    //loop to count digits by removing the last digit
        while (num >0){
            num =num /10;
            count ++;
        }
        printf ("total digits: %d",count  );
        return 0 ;
        
    }
    