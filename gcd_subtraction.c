#include<stdio.h>
int t = 0;
void gcd(int m,int n);

int main()
{
    int m,n;
    printf("m = ");
    scanf("%d",&m);
    printf("n = ");
    scanf("%d",&n);

    gcd(m,n);
    return 0;
}
void gcd(int m,int n)
{
    if(n==m)
    {
        printf("gcd is %d",n);
    }
    if(m>n)
    {
        t=m-n;
        gcd(t,n);
    }
    else if(n>m)
    {
        t=n-m;
        gcd(t,m);
    }
}

