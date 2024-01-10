#include<stdio.h>
int main()

{

char ch;
printf("character = ");
scanf("%c",& ch);

if(ch>='0' && ch<='9')
{
   printf("character %c is digit",ch);
}
else
{
    printf("character %c is not digit",ch);
}

return 0;
}