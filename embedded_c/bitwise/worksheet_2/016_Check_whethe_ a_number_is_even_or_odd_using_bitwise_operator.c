/*
Check whether a number is even or odd using bitwise operator
Question: Write a C program to check whether a number is even or odd using bitwise AND operator.
Sample data: Input: 7
Expected output: 7 is odd
*/
#include<stdio.h>
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);
     if(a&1)
     {
          printf("%d is odd",a);
     }
     else
     {
          printf("%d is even",a);
     }
}