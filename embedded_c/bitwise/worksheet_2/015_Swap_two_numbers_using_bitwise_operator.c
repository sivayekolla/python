/*
 Swap two numbers using bitwise operator
Question: Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
Sample data: Input: a=5, b=9
Expected output: After swapping: a=9, b=5
*/
#include<stdio.h>
int main()
{
     int a,b;
     printf("enter 2 numbers:");
     scanf("%d %d",&a,&b);
     a=a^b;
     b=b^a;
     a=a^b;
     printf("the swapped numbers are:%d %d",a,b);
}