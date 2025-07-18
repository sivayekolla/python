/*Pointer Arithmetic and Array Bounds
Task: Write code that attempts to access memory outside an array using pointer arithmetic and explain why this is unsafe.

Sample data:

1
2
int arr[] = {10, 20, 30};
int *ptr = arr + 5; // Out of bounds
Expected output:

Undefined behavior - accessing memory outside the array may cause crash or unexpected results
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,temp;
     printf("enter no of values in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int *ptr=arr+a+3;//undefined behavior
     printf("%d",*(ptr));

}