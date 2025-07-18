#include<stdio.h>
#include<stdlib.h>
struct stu
{
     int a;
     struct stu *link;
};
int main()
{
     int k, n;
     printf("enter number of lists and number of elements in each list:\n");
     scanf("%d %d", &k, &n);
     int total = k * n;
     int arr[1000];
     int index = 0;
     for(int i = 0; i < k; i++)
     {
          for(int j = 0; j < n; j++)
          {
               scanf("%d", &arr[index]);
               index++;
          }
     }
     for(int i = 0; i < (total - 1); i++)
     {
          for(int j = (i + 1); j < total; j++)
          {
               if(arr[i] > arr[j])
               {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }
     struct stu *head = (struct stu *)malloc(sizeof(struct stu));
     head->link = NULL;
     struct stu *temp = head;
     for(int i = 0; i < total; i++)
     {
          struct stu *new = (struct stu *)malloc(sizeof(struct stu));
          new->a = arr[i];
          new->link = NULL;
          temp->link = new;
          temp = new;
     }
     temp = head->link;
     while(temp != NULL)
     {
          printf("%d ", temp->a);
          temp = temp->link;
     }
}
