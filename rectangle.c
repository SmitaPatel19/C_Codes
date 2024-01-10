#include<stdio.h>
int main()
{
   int l;
   float b;
   printf("length=",l);
   scanf("%d",& l);

   printf("bredth=",b);
   scanf("%f",& b);

   printf("area=%f\n",l*b);
   printf("perimeter=%f\n",2*(l+b));

return 0;
}