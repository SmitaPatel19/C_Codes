#include<stdio.h>
int main()
{
    int n,cnt=0;

    printf("enter number=");
    scanf("%d",&n);
        
    for(int i=2;i<n;i++)
    {
          if(n%i == 0)
          {
            cnt ++;
          }
    }

    if(cnt == 0)
    {
        printf("%d is a prime number",n);
    }
    else {
        printf("%d is not a prime number",n);
    }

return 0;
}