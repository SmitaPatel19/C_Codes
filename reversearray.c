#include<stdio.h>

int reverse(int arr[],int n);

int main()
{
    int n;

    printf("enter number of elements= ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

return 0;
}

int reverse(int arr[],int n)
{
    int rev[n];
    printf("reverse = ");

    for(int i=0;i<n;i++)
    {
        rev[i]=arr[n-1-i];
        printf("%d\t",rev[i]);
    }
}