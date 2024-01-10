#include<stdio.h>
#include<math.h>
int root(int x);

int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);

    printf("square root of %d is %d",n,root(n));

return 0;
}

int root(int x)
{   
    int root=pow(x,0.5);
    return root;
}