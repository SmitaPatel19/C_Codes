#include<stdio.h>

void countodd(int arr[],int n);

int main()
{
    int n;
    printf("enter number of elements of array,n=");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    countodd(arr,n);
    
return 0;
}

void countodd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    printf("number of odd elements=%d",count);
}