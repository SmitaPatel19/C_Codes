#include<stdio.h>
#include<math.h>

void cube(int n);
void multi2(int n);
void sum3(int n);
void multi3(int n);

int main()
{
    int n;
    printf("enter number of terms in sequence = ");
    scanf("%d",&n);

    //cube(n);
    //multi2(n);
    //sum3(n);
    multi3(n);

return 0;
}

void cube(int n)
{
    int a;
    for(int i=1;i<=n;i++)
    {
        a=pow(i,3);
        printf("%d, ",a);
    }
}

void multi2(int n )
{
    int a;
    for(int i=-1; i>=-n;i--)
    {
        a=2*i;
        printf("%d, ",a);
    }
}

void sum3(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d, ",a);
        a=a+3;
    }
}

void multi3(int n)
{

    for(int i=-2;i<=n;i++)
    {
        if(i<0)
        {
            printf("%d, ",3*i+1);
        }
        else
        {
            printf("%d, ",3*i);
        }
    }
}