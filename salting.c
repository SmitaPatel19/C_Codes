#include<stdio.h>
#include<string.h>

void password(char old[]);

int main()
{
    char oldps[200];

    printf("password = ");
    scanf("%s",oldps);

    password(oldps);
}

void password(char old[])
{
    char new[] ="123";
    strcat(old,new);
    printf("new password is = %s",old);
}