#include<stdio.h>
#include<string.h>
int main()
{
     int arr[10];
     memset(arr, 0, sizeof(arr));
     for(int i=0; i<10; i++)
     {
          printf("%d ", arr[i]);
     }
}
