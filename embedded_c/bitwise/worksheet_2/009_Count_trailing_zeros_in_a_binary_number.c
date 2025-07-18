/*
9. Count trailing zeros in a binary number
Question: Write a C program to count the number of trailing zeros in the binary representation of a number.
Sample data: Input: 40 (binary 101000)
Expected output: Number of trailing zeros: 3


*/
#include<stdio.h>
int main()
{
     int a,b=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
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

     printf("%d",(b));
}