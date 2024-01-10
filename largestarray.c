#include<stdio.h>
int main()
{
    int n;

    printf("enter number of elements in array = ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int lar=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            lar=arr[i];
        }
    }
    printf("largest element in array is %d",lar);

return 0;
}