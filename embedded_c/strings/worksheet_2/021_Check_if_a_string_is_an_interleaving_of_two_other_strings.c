#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50], s2[50], s3[100];
    printf("enter s1:\n");
    fgets(s1,50,stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("enter s2:\n");
    fgets(s2,50,stdin);
    s2[strcspn(s2,"\n")]='\0';
    printf("enter s3:\n");
    fgets(s3,100,stdin);
    s3[strcspn(s3,"\n")]='\0';

    int i=0, j=0, k=0;
    while(s3[k]!='\0')
    {
        if(s1[i]==s3[k]) 
        { 
          i++; 
          k++; 
      }
          else if(s2[j]==s3[k]) 
          { 
          j++; k++; 
          }
        else 
        {
          break;
        }
    }

    if(s1[i]=='\0' && s2[j]=='\0' && s3[k]=='\0') 
    {
     printf("True");
    }
    else
    { 
     printf("False");
    }
}
