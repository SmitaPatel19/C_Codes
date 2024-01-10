
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],a;
    int l,max=0;
    printf("enter string");

    fgets(str, 100, stdin);

    l=strlen(str);

    for(int i=0; i<l; i++)
    {
        int c=0;
        for(int j=0; j<l; j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            a=str[i];

        }

    }
    printf("%c  %d", a, max);
    return 0;

}