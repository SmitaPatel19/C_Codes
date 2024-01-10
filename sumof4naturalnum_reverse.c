#include<stdio.h>
int main()
{
int n,sum=0;

printf("enter number=");
scanf("%d",&n);

for(int i=1;i<=n;i++)                                      //for(int i=1,j=n;i<=n,j>0;i++,j--)
{                                                          //{sum= sum+i;
    sum=sum+i;                                             //printf("%d, ",j);
}                                                          //}
printf("sum of natural numbers=%d\n",sum);                 //printf("sum is %d\n",sum);
printf("natural number in reverse =");                       // or
for(int i=n;i>0;i--)                                       //for(j=n;j>0;j--)
{                                                          //{sum=sum+j;
    printf("%d,",i);                                       //printf("%d, ",j);
}                                                          //} 
return 0;                                                  //printf("sum is %d\n",sum);
}