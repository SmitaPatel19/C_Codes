#include<stdio.h>
#include<string.h>

int main()
{
    char str1[200],str2[200];

    printf("enter string 1 = ");
    gets(str1);

    printf("enter string 2 to insert = ");
    gets(str2);

    printf("after inserting = %s\n",strcat(str1,str2));

return 0;
}