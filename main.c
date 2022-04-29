/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
 
int main()
{
  int number, Square;
 
  printf("Please Enter any integer Value : ");
  scanf("%d", &number);
  
  Square = number * number;
  
  printf("\n Square of a number %d is  =  %d", number, Square);
 
  return 0;
}