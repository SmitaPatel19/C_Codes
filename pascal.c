#include<stdio.h>
int fact(int n);
int pascal(int n,int r);

int main()
{
    int n,j;
    printf("n=");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        

        for(int k=0;k<=i;k++)
        {
            printf("%2d",pascal(i,k));
            printf(" ");
        }
        printf("\n");
    }
}

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int pascal(int n,int r)
{
    int p;
    p=fact(n)/(fact(r)*fact(n-r));
    return p;
}
