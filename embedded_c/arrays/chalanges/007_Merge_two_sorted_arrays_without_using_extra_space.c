#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    printf("enter size of A:\n");
    scanf("%d", &n);
    printf("enter size of B:\n");
    scanf("%d", &m);

    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * m);

    printf("enter elements of A:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    printf("enter elements of B:\n");
    for(int i = 0; i < m; i++)
    {
        scanf("%d", b + i);
    }

    for(int i = 0; i < n; i++)
    {
        if(*(a + i) > *b)
        {
            int temp = *(a + i);
            *(a + i) = *b;
            *b = temp;

            for(int j = 1; j < m; j++)
            {
                if(*(b + j - 1) > *(b + j))
                {
                    int t = *(b + j - 1);
                    *(b + j - 1) = *(b + j);
                    *(b + j) = t;
                }
                else
                {
                    break;
                }
            }
        }
    }

    printf("merged A:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    printf("\nmerged B:\n");
    for(int i = 0; i < m; i++)
    {
        printf("%d ", *(b + i));
    }

    free(a);
    free(b);
}
