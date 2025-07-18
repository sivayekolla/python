/*
 Get highest set bit of a number
Question: Write a C program to find the position of the highest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Highest set bit of 18 is at position 4 (zero-based)


*/
#include<stdio.h>
int main()
{
     int a,b=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          if((a>>i)&1)
          {
               b=i;
          }
     }
     printf("%d",b);
}