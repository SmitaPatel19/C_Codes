#include<stdio.h>
int main()
{
   int a,b,c;

   printf("a=");
   scanf("%d",&a);

   printf("b=");
   scanf("%d",&b);

   printf("c=");
   scanf("%d",&c);

   if(a>b&&a>c)
   {
       printf("%d (a)is greatest",a);
   }
   else if (b>a&&b>c)
   {
       printf("%d (b)is greatest",b);
   }
   else
   {
       printf("%d (c)is greatest",c);
   }
return 0;
}