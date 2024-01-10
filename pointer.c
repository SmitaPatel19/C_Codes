#include<stdio.h>

int main()
{
int *ptr; 
int x;
int **pptr;

ptr=&x;
x=0;
pptr = &ptr;

printf("x=%d\n",x);
printf("*ptr=%d\n",*ptr);
printf("**pptr=%d\n",**pptr);
printf("*pptr=%p\n",*pptr);

printf("ptr=%p\n",ptr);
printf("pptr=%p\n",pptr);

printf("address of x=%p\n",&x);
printf("address of ptr=%p\n",&ptr);
printf("address of pptr=%d\n",&pptr);

return 0;
}