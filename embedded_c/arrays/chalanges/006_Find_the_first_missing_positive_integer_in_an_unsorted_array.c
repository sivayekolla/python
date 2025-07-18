#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("enter number of elements:\n");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    printf("enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for(int i = 0; i < n; i++)
    {
        while(*(arr + i) > 0 && *(arr + i) <= n && *(arr + *(arr + i) - 1) != *(arr + i))
        {
            int temp = *(arr + *(arr + i) - 1);
            *(arr + *(arr + i) - 1) = *(arr + i);
            *(arr + i) = temp;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) != i + 1)
        {
            printf("first missing positive number is: %d\n", i + 1);
            free(arr);
            return 0;
        }
    }

    printf("first missing positive number is: %d\n", n + 1);
    free(arr);
}
