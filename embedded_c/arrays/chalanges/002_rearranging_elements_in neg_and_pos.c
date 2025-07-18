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
        if(i % 2 == 0 && *(arr + i) < 0)
        {
            int j = i + 1;
            while(j < n && *(arr + j) < 0)
            {
                j++;
            }
            if(j == n) break;

            int temp = *(arr + j);
            for(int k = j; k > i; k--)
            {
                *(arr + k) = *(arr + k - 1);
            }
            *(arr + i) = temp;
        }

        if(i % 2 == 1 && *(arr + i) >= 0)
        {
            int j = i + 1;
            while(j < n && *(arr + j) >= 0)
            {
                j++;
            }
            if(j == n) break;

            int temp = *(arr + j);
            for(int k = j; k > i; k--)
            {
                *(arr + k) = *(arr + k - 1);
            }
            *(arr + i) = temp;
        }
    }

    printf("rearranged array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");
    free(arr);
}
