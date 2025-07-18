/*Question 1: Pointer Increment and Access
Task: Log Session an integer array with 5 elements. Use a pointer to access and print the third element by incrementing the pointer appropriately.

Sample data:

1
int arr[] = {5, 10, 15, 20, 25};
Expected output:

Third element is 15
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,k;
     k=a;
     printf("enter no of values in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*k);
     printf("enter values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     printf("enter position number:\n");
     scanf("%d",&a);
     for(int i=0;i<k;i++)
     {
          if(i==(a-1))
          {
          printf("%d",arr[i]);
          }
     }
}