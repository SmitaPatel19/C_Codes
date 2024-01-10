#include<stdio.h>
int main()
{
    int n,x;

    printf("enter number of elements in an array = ");
    scanf("%d",&n);
 
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("number x to find how many times it occurs in array = ");
    scanf("%d",&x);

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }

    printf("number %d occurs %d times in array",x,count);

return 0;
}