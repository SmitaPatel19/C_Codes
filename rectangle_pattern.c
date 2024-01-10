#include<stdio.h>
int main()
{
    char n;

    printf("enter character=");
    scanf("%c",&n);

    for(char i=1;i<=5;i++)
    {
        for(char j=1;j<=8;j++)
        {
            printf("%c",n);
        }
        printf("\n");
    }
return 0;
}