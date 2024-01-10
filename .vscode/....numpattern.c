#include<stdio.h>
void numpat1(int n);
int main()
{
    int n,m;

    printf("n=");
    scanf("%d",&n);

    printf("m=");
    scanf("%d",&m);
    switch(m)
    {
        case 1 : numpat1(n);
        break;

        default : printf("Incorrect choice.");
        break;
    }
    
return 0;
}

void numpat1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=2*i;k<2*n;k++)
        {
            printf(" ");
        }
        for(int l=i;l>=1;l--)
        {
            printf("%d",l);
        }
    printf("\n");
    }
}