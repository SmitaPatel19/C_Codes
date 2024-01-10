#include<stdio.h>
#include<string.h>

int main()
{
    char str1[200]="ravi";
    char str2[200]="harry";
    char str3[400];

    //printf("string 1 = ");
    //fgets(str1,200,stdin);
    puts(str1);

    //printf("string 2 = ");
    //fgets(str2,200,stdin);
    puts(str2);

    //printf("result=\n");
    strcpy(str3,strcat(str1," is a friend of "));

    puts(strcat(str3, str2));

    return 0;
}