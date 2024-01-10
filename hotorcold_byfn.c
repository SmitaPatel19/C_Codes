#include<stdio.h>

void temp(int x);

int main()
{
    int n;
    printf("enter temp in celcius=");
    scanf("%d",&n);

    temp(n);

return 0;
}

void temp(int x)
{
    if(x<15)
    {
        printf("cold");
    }
    else if(30<=x)
    {
        printf("hot");
    }
    else{
        printf("not hot not cold");
    }
}