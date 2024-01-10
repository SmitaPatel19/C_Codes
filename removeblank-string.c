#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    int i;

    printf("enter string with blank spaces = ");
    gets(str);
    printf("entered string is = %s\n",str);
    int len=strlen(str);
    printf("%d",len);

    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            for(int j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
    printf("%s",str);
return 0;
}