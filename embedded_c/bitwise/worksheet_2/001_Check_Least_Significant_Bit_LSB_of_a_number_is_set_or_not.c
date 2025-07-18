/*
Check Least Significant Bit (LSB) of a number is set or not
Question: Write a C program to check if the Least Significant Bit (LSB) of a number is set (1) or not.
Sample data: Input: 5 (binary 0101)
Expected output: LSB of 5 is set (1)
*/

#include<stdio.h>
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);
     if((a>>0)&1)
     {
          printf("lsb of %d is set",a);
     }
     else
     {
         printf("lsb of %d is not set",a); 
     }
}