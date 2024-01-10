#include<stdio.h>

void righttri(int n);
void mirrrorrighttri(int n);
void reverseright(int n);
void isoscelestri(int n);
void hollowsquaredi(int n);
void hollowsquaredi2(int n);
void lefttri(int n);
void pyramid(int n);
void rhombus(int n);
void hollowrhombus(int n);
void oval(int n);

int main()
{
    int n,m;
    printf("enter number of rows=");
    scanf("%d",&n);

    printf("enter 1 to print right triangular pattern\n");
    printf("enter 2 to print mirrored right triangular pattern\n");
    printf("enter 3 to print reverse right triangular pattern\n");
    printf("enter 4 to print isosceles triangular pattern\n");
    printf("enter 5 to print square with $ in one diagonal pattern\n");
    printf("enter 6 to print square with $ as both diagonals pattern\n");
    printf("enter 7 to print left triangluar pattern\n");
    printf("enter 8 to print pyramid pattern\n");
    printf("enter 9 to print rhombus pattern\n");
    printf("enter 10 to print hollow rhombus pattern\n");
    printf("enter 11 to print oval pattern\n");

    printf("enter choice,m=");
    scanf("%d",&m);

    switch (m)
    {
    case 1: righttri(n);
    break;

    case 2: mirrrorrighttri(n);
    break;

    case 3: reverseright(n);
    break;

    case 4: isoscelestri(n);
    break;

    case 5: hollowsquaredi(n);
    break;

    case 6: hollowsquaredi2(n);
    break;

    case 7: lefttri(n);
    break;

    case 8: pyramid(n);
    break;

    case 9: rhombus(n);
    break;

    case 10: hollowrhombus(n);
    break;

    case 11: oval(9);
    break;

    default : printf("incorrect choice ");
    break;
    }
return  0;
}

void righttri(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
}

void mirrrorrighttri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j>i; j--)
        {
            printf(" ");
        }

        for (int k = i; k >= 0; k--)
        {
            printf("*");
        }
    printf("\n");
    }
}

void reverseright(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >i; j--)
        {
            printf("*");
        }
    printf("\n");
    }
}

void isoscelestri(int n)
{
    for (int i = 0; i < n; i++)
        {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }

        for(int k=i;k>=0;k--)
        {
            printf("*");
        }
        
        for(int l=0;l<i;l++)
        {
            printf("*");
        }
    printf("\n");
    }

}

void hollowsquaredi(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("$");
            }
            else if(i==0 || j==0 || i==(n-1) || j==(n-1))
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
}

void hollowsquaredi2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i+j)==(n-1))
            {
                printf("$");
            }
            else if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1))
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
}

void lefttri(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pyramid(int n)
{
    int i,j,k;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }
        for (int k=((2*n-1)-i);k>=i;k--)
        {
            if(i%2!=0)
            {
                if(k%2!=0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(k%2==0)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }
}

void rhombus(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        for(int k=n;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void hollowrhombus(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        for(int k=n;k>0;k--)
        {
            if(i==0 || i==(n-1) || k==n || k==1  )
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
}

void oval(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=(n-1);j>=0;j--)
        {
            if(i==0||i==(n-1))
            {
                if(j==(n/2-1) || j==(n/2) || j==(n/2+1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if(i==1|| i==(n-2))
            {
                if(j==(n-2) || j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if(j==0 || j==(n-1))
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
}