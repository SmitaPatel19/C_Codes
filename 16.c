#include<stdio.h>
int main()
{
    int n,arr[100];

    printf("number of elements in array=");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
    if(arr[i]>arr[0])
    {
        arr[0]=arr[i];
    }
    }
    printf("%d is largest array",arr[0]);
return 0;
}