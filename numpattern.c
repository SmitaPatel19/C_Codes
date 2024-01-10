#include<stdio.h>

void newtri(int n);
void reverse(int n);
void righttri(int n);

int main()
{
    int n;

    printf("enter number of rows = ");
    scanf("%d",&n);

    newtri(n);
    reverse(n);
    righttri(n);

return 0;
}

void newtri(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
                printf("%d", j);
        }
        for (int k = 2; k <= i; k++)
        {
                printf("%d", k);
        }
        printf("\n");
    }
}

void reverse(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }
}

void righttri(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }
}