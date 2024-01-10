#include<stdio.h>
void multiplication(int mat1[][200],int m,int n,int mat2[][200],int p,int q);

int main()
{
    int m,n,p,q;

    printf("Enter rows for matrix 1 = ");
    scanf("%d",&m);
    printf("Enter columns for matrix 1 = ");
    scanf("%d",&n);

    printf("Enter rows for matrix 2 = ");
    scanf("%d", &p);
    printf("Enter columns for matrix 2 = ");
    scanf("%d", &q);

    int mat1[m][n],mat2[p][q];

    printf("elements of matrix 1 = ");
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //printf("mat1[%d][%d] = ",i,j);
            scanf("%d",& mat1[i][j]);

        }
    }

    printf("elements of matrix 2 = ");
    printf("\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            //printf("mat1[%d][%d] = ",i,j);
            scanf("%d",& mat2[i][j]);
        }
    }
    multiplication(mat1,m,n,mat2,p,q);

return 0;
}


void multiplication(int mat1[][200], int m, int n, int mat2[][200], int p, int q)
{   
   
    if(n!=p)
    {
        printf("multiplication is not valid");
    }
    else
    {   
        printf("multiplication matrix=\n");

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                int r=0;
                for(int k=0;k<n;k++)
                {
                    r=r+(mat1[i][k]*mat2[k][j]);                                                              
                }
                printf("%d\t",r);
            }
            printf("\n");
        }
    }
}