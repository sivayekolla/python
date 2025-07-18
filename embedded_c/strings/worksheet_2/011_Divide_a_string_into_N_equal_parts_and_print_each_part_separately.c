#include <stdio.h>                                                                                                
int main()
{
     char s[100];
     printf("enter a string:\n");
     fgets(s,100,stdin);
     int n=4,l=0,i=0,p=0;
     while(s[l])
     l++;
     if(l%n!=0)return 1;
     p=l/n;
     for(i=0;i<l;i++)
     {         
          putchar(s[i]);
          if((i+1)%p==0)
          {
               putchar('\n');
          }
     }
}
