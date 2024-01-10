#include<stdio.h>
int main()
{
    char ch;

    printf("enter character=");
    scanf("%c",&ch);

     for(int i=0;i<5;i++)
     {
      for(int j=i;j>=0;j--)
      {
        printf("%c",ch);
      }
      printf("\n");
     }              
return 0;
}