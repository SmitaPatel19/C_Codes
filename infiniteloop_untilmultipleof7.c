#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter number=");
        scanf("%d",&n);

        if(n%7==0)
        {
             printf("it's multiple of 7\n");
             break;
        }
    }while(1);
    printf("THANK YOU");
return 0;
}