/*
Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.
Input: {"John", "Alice", "Bob"}
Output: {"Alice", "Bob", "John"}
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    printf("enter number of strings:\n");
    scanf("%d", &n);
    char **arr = (char **)malloc(sizeof(char *) * n);
    for(int i = 0; i < n; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * 100);
    }
    printf("enter strings:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%s", *(arr + i));
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(*(arr + i), *(arr + j)) > 0)
            {
                char temp[100];
                strcpy(temp, *(arr + i));
                strcpy(*(arr + i), *(arr + j));
                strcpy(*(arr + j), temp);
            }
        }
    }
    printf("sorted strings:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", *(arr + i));
    }
    for(int i = 0; i < n; i++)
    {
        free(*(arr + i));
    }
}
