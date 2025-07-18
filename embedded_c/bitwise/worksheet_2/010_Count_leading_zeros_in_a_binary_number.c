/*
Count leading zeros in a binary number
Question: Write a C program to count the number of leading zeros in the binary representation of a number (assuming 32-bit integer).
Sample data: Input: 16 (binary 00000000000000000000000000010000)
Expected output: Number of leading zeros: 27
*/



#include<stdio.h>
int main()
{
     int a,b=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=32;i>=0;i--)
     {
          if(((a>>i)&1)==0)
          {
               b++;
               
          }
          else
          {
               break;
          }
     }

     printf("%d",(b-1));
}