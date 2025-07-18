#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
typedef struct stu
{
     char arr;
     int arr1;
     char arr2;
     float arr3;
}man;
man *arrn=(man *)malloc(sizeof(struct stu));
man *arrn1=(man *)malloc(sizeof(man));
int main()
{
     int a,b;
     a=sizeof(man);
// size before packing=16
//after packing =10
     printf("%d",a);

}