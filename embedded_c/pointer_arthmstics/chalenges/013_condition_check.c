/*Given int arr[5] = {10, 20, 30, 40, 50}, what does *(arr + *(arr + 2) / 10 - 1) evaluate to? Break it down and explain*/




#include<stdio.h>
int main()
{
     int arr[5]={10,20,30,40,50};
     int g=*(arr + *(arr + 2) / 10 - 1);
     printf("%d",g);
}