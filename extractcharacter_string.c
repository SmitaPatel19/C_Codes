#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];

    printf("enter string = ");
    gets(str);

    int n, l = strlen(str);

    printf("enter n to extract n characters = ");
    scanf("%d", &n);

    printf("after extraction = ");
    for (int i = (l - n); i < l; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}