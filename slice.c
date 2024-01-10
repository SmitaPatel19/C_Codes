#include<stdio.h>
void slice(char str[],int m,int n);

int main()
{
    char str[200];

    printf("enter sentence = ");
    gets(str);
    printf("entered sentence is = %s\n",str);

    int m,n;
    printf("enter m where to start printing = ");
    scanf("%d",&m);

    printf("enter n where to end printing = ");
    scanf("%d",&n);

    slice(str,m,n);

return 0;
}

void slice(char str[],int m,int n)
{
    char new[100];
    int j;
    for(int i=m,j=0;i<=n;i++,j++)
    {
        new[j]=str[i];
    }
    printf("sliced sentence is = %s",new);
}