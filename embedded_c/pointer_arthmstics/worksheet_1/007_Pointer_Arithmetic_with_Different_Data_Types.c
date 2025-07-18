/*
Pointer Arithmetic with Different Data Types
Task: Log Session a double array and use pointer arithmetic to print the second element. Explain how pointer arithmetic differs for double compared to int.

Sample data:

1
double darr[] = {1.1, 2.2, 3.3};
Expected output:
Second element is 2.2
Explanation:
Pointer increments by the size of double (usually 8 bytes), so moving pointer by 1 points to the next double element.
*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
     double a;
     printf("enter no of values in array:\n");
     scanf("%lf",&a);
     double *arr=(double *)malloc(sizeof(double)*a);
     printf("enter values to array:\n");
     for(int i=0;i<a;i++)
     {
          scanf("%lf",&arr[i]);
     }
     double *ptr=arr;
     ptr=ptr+a-2;
     printf("%lf",*(ptr));
}