#include<stdio.h>
int main()
{
          char arr[] = "abcdef";
          char *p = arr + 3;
          printf("%c", *(p - 1));//c
}