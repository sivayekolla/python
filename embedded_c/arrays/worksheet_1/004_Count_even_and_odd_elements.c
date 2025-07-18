/*Count even and odd elements
Question description: Write a C program to count how many even and odd numbers are in the array.
Sample data:
Input: 4 7 9 10 22
Expected output:
Even: 3
Odd: 2*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,even=0,odd=0;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values yo array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n\n");
     int *ptr=arr;
     for(int i=0;i<a;i++)
     {
          if((*ptr)%2 ==0)
          {
               even++;
          }
          if((*ptr)%2 !=0)
          {
               odd++;
          }
          ptr++;
     }
     printf("the even elements:%d\nthe odd elements:%d",even,odd);
}