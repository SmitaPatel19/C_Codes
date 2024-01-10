#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows = ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=n;j>0;j--)
        {
            if(i==0 || j==n || i==(n-1) || j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}