#include<stdio.h>
int main(){
    int i, n,factorial=1;
    
    printf("enter number = ");
    scanf("%d",&n);

   for(i=n;i>=1;i--)
    {
        factorial = factorial * i;
    }
    printf("factorial = %d",factorial);

   /* int fact=1;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial = %d",fact);*/
    
return 0;
}