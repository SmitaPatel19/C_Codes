#include<stdio.h>
void binary(int x);

int main()
{
    int n,m;
    
    printf("enter number 1=");
    scanf("%d",&n);

    printf("number in binary is = ");
    binary(n);

    printf("\n\nenter number 2=");
    scanf("%d",&m);

    printf("number in binary is = ");
    binary(m);

    int sum=n+m;
    printf("\n\nsum = %d\n",sum);
    printf("sum in binary = ");
    binary(sum);

    int mult=n*m;
    printf("\n\nmultiplication = %d\n",mult);
    printf("multiplication in binary = ");
    binary(mult);

return 0;
}
void binary(int x)
{
    int count=0;
    int arr[200];
    for(int i=0;x!=0;i++)
    { 
        int r=x%2;
        arr[i]=r;
        printf("%d",arr[i]);
        x=x/2;
        count++;
    }

    count=count-1;
    int rev[count];
    
    for(int i=0;i<=count;i++)
    {
        rev[i]=arr[count-i];
        printf("%d",rev[i]);
    }
}