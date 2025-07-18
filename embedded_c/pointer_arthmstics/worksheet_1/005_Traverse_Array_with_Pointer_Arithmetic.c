/*Traverse Array with Pointer Arithmetic
Task: Using only a pointer (no array indexing), print all elements of the array.

Sample data:

1
int arr[] = {100, 200, 300, 400};
Expected output:

100 200 300 400
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a,k;
     printf("enter no of values in array:\n");
     scanf("%d",&a);
     int *arr=(int *)malloc(sizeof(int)*a);
     printf("enter values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%d",&arr[i]);
     }
     int *ptr=arr;
     for(int i=0;i<a;i++)
     {
          printf("%d",*(ptr));
          ptr++;
     }
}