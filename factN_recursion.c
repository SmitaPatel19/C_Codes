#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);

    printf("factorial is =%d",fact(n));

    return 0;
}

int fact(int n)
{
    if (n==0)         //(N==1)
    {
        return 1;     
    }
    int factN=fact(n-1);
    return factN*n;
}
