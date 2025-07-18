/*
Segregate even and odd
Question description: Write a C program to arrange all even numbers first and then all odd numbers.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
Even numbers: 2 4 6
Odd numbers: 1 3 5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,flag=1;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n");
     printf("the even elements are:\t");
     for(int i=0;i<a;i++)
     {
         if((arr[i]%2)==0)
         {
               printf("%d   ",arr[i]);
         }
     }
     printf("\n");
     printf("the odd elements are:\t");
     for(int i=0;i<a;i++)
     {
         if((arr[i]%2)!=0)
         {
               printf("%d   ",arr[i]);
         }
     }
}