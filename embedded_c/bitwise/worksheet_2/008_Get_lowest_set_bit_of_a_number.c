/*
Get lowest set bit of a number
Question: Write a C program to find the position of the lowest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Lowest set bit of 18 is at position 1 (zero-based)
*/
#include<stdio.h>
int main()
{
     int a,b=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=1;i<=32;i++)
     {
          if((a>>i)&1)
          {
               b=i;
               break;
          }
     }
     printf("%d",b);
}