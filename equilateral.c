#include<stdio.h>
int main()
{
    int r,c=1;

    printf("enter no. of rows,r=");
    scanf("%d",&r);

    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*c-1;k++)
        {
            printf("*");
        }
        c++;
        printf("\n");
    } 
return 0;
}