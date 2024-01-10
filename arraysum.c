#include<stdio.h>
int main()
{
    //aray making
    int n;
    printf("array size,n=");
    scanf("%d",&n);

    int arr[n];
    int sum=0;                          //int *ptr=&arr[0];
    
    for(int i=0;i<n;i++)
    {
        printf("element,arr[%d]=",i);
        scanf("%d",&arr[i]);           //scanf("%d",(ptr+i));
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);

return 0;
}