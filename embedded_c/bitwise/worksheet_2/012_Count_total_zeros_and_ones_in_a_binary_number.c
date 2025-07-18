/*
Count total zeros and ones in a binary number
Question: Write a C program to count the total number of zeros and ones in the binary representation of a number.
Sample data: Input: 15 (binary 00001111)
Expected output: Number of ones: 4, Number of zeros: 4 (assuming 8-bit)
*/


#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     int count0=0,count1=0;
     for(int i=0;i<8;i++)
     {
          if((a>>i)&1)
          {
               count1++;
          }
          else
          {
               count0++;
          }
     }
     printf("1:%d and 0:%d",count1,count0);
}