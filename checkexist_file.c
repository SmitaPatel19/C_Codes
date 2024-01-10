#include<stdio.h>
int main()
{
    FILE *ptr;

    ptr=fopen("smita.c","r");            //give name of file

    if(ptr==NULL)
    {
        printf("file does not exist");
    }
    else
    {
        fclose(ptr);
    }
    return 0;
}