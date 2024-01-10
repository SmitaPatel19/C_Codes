#include<stdio.h>
int main()
{ 
    int n,rem,rev=0;
    printf("enter number = ");
    scanf("%d",&n);
    int orig=n;

    for(;n!=0;)
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;
    }
    printf("rev = %d\n",rev);
    printf("number = %d\n",orig);

    if(rev==orig)
    {
        printf("number is pallindrome");
    }
    else
    {
        printf("number is not pallindrome");
    }

return 0;
}