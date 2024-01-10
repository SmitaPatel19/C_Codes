#include<stdio.h>
void printarray(int arr[],int n);
int main()
{
    
    int n;
    printf("enter number of elements=");
    scanf("%d",&n);
    int arr[n];

    printarray(arr,n);
return 0;
}

void printarray(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}