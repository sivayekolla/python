#include<stdio.h>
void mem_copy(void *dest, const void *src, size_t n)
{
    char *d=(char *)dest;
    const char *s=(const char *)src;
   
    int i=0;
    for(i=0;i<n;i++)
    {
        d[i]=s[i];
    }
}                                                                    
int main()
{
    int arr[]={1,2,3,45,6};
    int cpy[5];
    mem_copy( cpy, arr, 5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",cpy[i]);
    }

}