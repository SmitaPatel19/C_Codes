#include<stdio.h>
int main()
{
    int n,n1=0,n2=1;

    printf("enter n=");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        if(i<=1)
        {
            i=i;
        }
        else
        {
            i=n1+n2;
            n1=n2;
            n2=i;
        }

        printf("%d, ",i);
    }
return 0;
}