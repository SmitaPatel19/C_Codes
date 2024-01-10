#include<stdio.h>

void checkch(char str[], char ch);

int main()
{
    char str[200];
    char ch;

    printf("enter sentence = ");
    gets(str);
    printf("enetered sentence is = %s\n",str);

    printf("enter character to check = ");
    scanf("%c",&ch);

    checkch(str,ch);

return 0;
}

void checkch(char str[],char ch)
{
    for(int i=0;str[i] !='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("%c is present in sentence",ch);
            return;
        }
        else
        {
            printf("%c is not present in sentence",ch);
            return;
        }
    }
}