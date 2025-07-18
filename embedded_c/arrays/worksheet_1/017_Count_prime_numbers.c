/*
Count prime numbers
Question description: Write a C program to count and display all prime numbers in an array.
Sample data:
Input: 2 4 5 6 7 8
Expected output:
Primes: 2 5 7
Count: 3
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a;
     printf("enter no of elements:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter then values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("\n");
     int p,hut=0;
     printf("the prime number are :  \n");
     for(int i=0;i<a;i++)
     {
          p=arr[i];
          int count=0;
          for(int i=2;i<p;i++)
          {
               if((p%i)==0)
               {
                    count++;
               }
          }
          if(p>1 && count==0)
          {
               hut++;
               printf("%d ",arr[i]);
          }
     }
      printf("the no of prime number are :%d",hut);
}