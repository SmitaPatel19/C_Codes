#include <stdio.h>
#include <math.h>

void square(int n, int t);
void sumofn(int n, int t);
int fact(int n);
void series3(int n);

int main()
{
    int n, t = 0;

    printf("enter number of elements = ");
    scanf("%d", &n);

    //square(n, t);
    //sumofn(n,t);
    series3(n);

    return 0;
}

void square(int n, int t)
{
    int x;
    printf("enter x = ");
    scanf("%d", &x);

    for (int i = n; i > 0; i--)
    {
        t = ((pow(-1, i)) * (pow(x, i))) + t;
    }
    printf("%d", t);
}

void sumofn(int n,int t)
{
    for(int i=1;i<=n;i++)
    {
        t=(i*(i+1)/2)+t;
    }
    printf("%d",t);
}

int fact(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    else
    {
        int fa=fact(x-1);
        return fa*x;
    }
}

void series3(int n)
{
    float t=0;
    int x;
    printf("enter x = ");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        t=((pow(-1,i)*pow(x,i))/fact(i))+t;
    }
    printf("%f",t);

}