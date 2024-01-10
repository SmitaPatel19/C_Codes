#include<stdio.h>
int main()
{
    char str[200];
    char new[200];
    int i;

    printf("enter string = ");
    gets(str);

    printf("entered string in lowercase is = %s\n",str);

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            new[i]=str[i]-32;
        }
        else
        {
            new[i]=str[i];    
        }
    }
    new[i]='\0';
    printf("%s",new);
return 0;
}