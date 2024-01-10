#include<stdio.h>
int main()
{
    int n,rem;

    printf("enter number=");
    scanf("%d",&n);
    int rev=0;

    for(;n!=0;)
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;
    }
    printf("reversed = %d",rev);

return 0;
}