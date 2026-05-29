#include<stdio.h>
//Write a program to check whether a number is palindrome .
int main (){
  int num;
  int isnegative =0;
  int d ;
  int result =0;
  int original;//Stores a backup of the input number .
  printf ("enter the number ");
  scanf ("%d" ,&num );
  //Single digit numbers are always palindromes .
  if (num >=0 && num <10){
      printf ("the number is palindrome " );
      return 0 ;
  }
  //Negative numbers are never palindromes (dut to minus sign ).
  if (num<0){
      isnegative =1;
      printf ("the number is not palindrome " );
      return 0 ;
  }
  original =num;// Backup number before , loop destroys its value .
  //Loop to reverse the number .
  while (num >0 ){
      d = num %10;// Extract the last digit .
      result = (result*10) + d ;// Appends the digit to result.
      num = num /10;//Remove the last digit .
  }
  //Compare the reversed number with the original backup .
  if (original ==result ){
      printf("the number is palindrome ");
  }
  else {
      printf ("the number is not palindrome ");
  }
  return 0;
}  