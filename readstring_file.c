#include<stdio.h>
int main()
{
    FILE *str;
    str=fopen("string.txt","r");
    char ch;
    ch=fgetc(str);
    for(int i=0;ch!=EOF;i++)
    {
        printf("%c",ch);
        ch=fgetc(str);
    }
    printf("\n");
    fclose(str);
return 0;
}