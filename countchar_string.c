#include<stdio.h>
#include<string.h>

int countchar(char arr[]);

int main()
{
    char str[200];

    printf("enter string to count =");
    fgets(str,200,stdin);
    //gets(str);
    printf("entered string to count character is = %s\n",str);
    printf("length of string is = %d\n",countchar(str));
    printf("length of string is = %d\n",strlen(str));

    return 0;
}

int countchar(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return (count-1);
}