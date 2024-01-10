#include <stdio.h>
#include <string.h>

int main()
{
    int n,t, i,j;
    printf("n = ");
    scanf("%d",&n);

    t=2*n-5;

    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=t;j++)
        {
            if(i<j && (i+j)<=t)
            {
                printf(" ");
            }
            else if(i>j && (i+j-1)>t)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
return 0;
}