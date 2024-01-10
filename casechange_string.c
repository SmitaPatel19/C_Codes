#include<stdio.h>
#include<string.h>

void lowtouppr(char low1[]);
void uptolowr(char str[]);

int main()
{
    char low1[200],up2[200];

    printf("enter lowercase string= ");
    gets(low1);
    printf("entered lowercase string is = %s\n",low1);
    lowtouppr(low1);

    printf("enter uppercase string= ");
    gets(up2);
    printf("entered uppercase string is = %s\n", up2);
    uptolowr(up2);

return 0;
}

void lowtouppr(char low1[])
{
    int i;
    char up1[200];
    for (i = 0; i < strlen(low1); i++)
    {
        if (low1[i] >= 97 && low1[i] <= 122)
        {
            up1[i] = low1[i] - 32;
        }
        else
        {
            up1[i] = low1[i];
        }
    }
    up1[i] = '\0';
    printf("%s\n", up1);
}

void uptolowr(char str[])
{
    int i;
    char low2[200];
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            low2[i] = str[i] + 32;
        }
        else
        {
            low2[i] = str[i];
        }
        }
    low2[i] = '\0';
    printf("%s\n", low2);
}