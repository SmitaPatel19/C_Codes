#include<stdio.h>
int main(){
    char ch, i,j;
     printf("enter character = ");
    scanf("%c",&ch);
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
           printf("%c",ch);
        }
        printf("\n");
    }
return 0;
}