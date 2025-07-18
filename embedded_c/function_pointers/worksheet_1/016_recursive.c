#include<stdio.h>
int factorial(int num)
{
    if(num<=1)
    {
        return 1;
    }
    return num*factorial(num-1);
}
int fibonacci(int num)
{
    if (num <= 1)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{
    int num,sel;
    printf("enter the num:");
    scanf("%d",&num);
    int (*fptr)(int);
    printf("1-fibonacci 2-factorial");
    scanf("%d",&sel);
    if(sel==1)
    {
        fptr=fibonacci;
    }
    else{
        fptr=factorial;
    }
     int result = fptr(num);
    printf("Result: %d\n", result);
}