#include<stdio.h>
#include<string.h>

int main()
{
    char str[200],new[200];
    int i=0,count=0,l;

    printf("Enter string = ");
    gets(str);

    for(i=0;str[i]!=0;i++)
    {
        count++;
    }

    printf("enter string to insert=");
    gets(new);
    l=strlen(new);
    str[count]=' ';

    for(i=0;i<l;i++)
    {
        str[count+1+i]=new[i];
    }
    str[count+l+1]='\0';
    puts(str);

return 0;
}