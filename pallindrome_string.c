#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    char rev[200];
    int i;


    printf("enter word=");
    gets(str);

    int l=strlen(str);

    for(i=0;i<l;i++)
    {
        rev[i]=str[l-1-i];
    }
    rev[i]='\0';
    printf("reversed=%s\n",rev);

    for(int i=0;i<l;i++)
    {
        if(rev[i]==str[i])
        {
            printf("PALLINDROME");
            break;
        }
        else
        {
            printf("NOT PALLLINDROME");
            break;
        }
    }
return 0;
}