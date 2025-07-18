/*
Convert decimal to binary using bitwise operatorConvert decimal to binary using bitwise operator
Question: Write a C program to convert a decimal number to binary representation using bitwise operators.
Sample data: Input: 13
Expected output: Binary representation: 1101
*/



#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     printf("the binary value of %d is",a);
     for(int i=31;i>=0;i--)
     {
          printf("%d",(a>>i)&1);
     }
}