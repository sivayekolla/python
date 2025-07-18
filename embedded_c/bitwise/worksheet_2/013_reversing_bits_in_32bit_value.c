#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
     for(int i = 31; i >= 0; i--)
    {
        printf("%d", ((a >> i) & 1));
    }
    printf("\n");
    int j = 0;  
    for(int i = 31; i >= 16; i--, j++)
    {
        int b = ((a >> i) & 1);
        int c = ((a >> j) & 1);
        if(b == 1)
        {
            a |= (1 << j);
        }
        else
        {
            a &= ~(1 << j);
        }
        if(c == 1)
        {
            a |= (1 << i);
        }
        else
        {
            a &= ~(1 << i);
        }
    }
    for(int i = 31; i >= 0; i--)
    {
        printf("%d", ((a >> i) & 1));
    }
    printf("\n");
    return 0;
}