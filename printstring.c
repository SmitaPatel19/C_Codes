#include<stdio.h>
int main()
{
    char m,n,ch;
    char firstname [200];
    char lastname [200];

    //printf("firstname=");
    //scanf("%s",firstname);
    //printf("%s",firstname);

    int i = 0;
    while (ch != '\n')
    {
        scanf("%c",&ch);
        firstname[i]=ch;
        i++;
    }
    firstname[i]='\0';
    puts(firstname);
return 0;
}