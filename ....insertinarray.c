#include<stdio.h>
int main()
{
    int n;

    printf("enter number of elements in array,n = ");
    scanf("%d",&n);

    int arr[200];

    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
 
    printf("array is = ");
    for(int i=0;i<n;i++)
    {
        printf("%d , ",arr[i]);
    }

    printf("\narr[%d] = ",n);
    scanf("%d",arr[n]);
    int new[n+1];
    new[n+1]=arr[n+1];

    printf("array after inserting = ");
    for(int i=0;i<=n;i++)
    {
        printf("%d , ",new[i]);
    }
    
return 0;
}