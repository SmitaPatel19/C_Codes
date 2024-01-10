#include<stdio.h>

void first(char arr[]);
void last(char arr[]);

int main()
{
    char firstname[]="smita";
    char lastname[]="patel";

    first(firstname);
    last(lastname);

    //for(int i=0;firstname[i]!='\0';i++)
    //{
    //    printf("%c\t",firstname[i]);
    //}
    //for(int i=0;lastname[i]!='\0';i++)
    //{
    //    printf("\n%c\t",lastname[i]);
    //}
return 0;
}

void first(char arr[])
{
    for (int i = 0;arr[i] != '\0'; i++)
    {
        printf("%c\t", arr[i]);
    }
    printf("\n");
}

void last(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c\t", arr[i]);
    }
    printf("\n");
}