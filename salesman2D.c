#include<stdio.h>
int main()
{
    int sales[5][3];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter %d salesman's %d product sales = ",(i+1),(j+1));
            scanf("%d",&sales[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=sales[i][j]+sum;
        }
        printf("total sales by %d salesman = %d\n",(i+1), sum);
    }

    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sales[i][j]+sum;
        }
        printf("total sales of %d item = %d\n",(j+1),sum);
    }
return 0;
}