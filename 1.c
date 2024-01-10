#include<stdio.h>
int main()
{
float r;
float pi=3.14;
printf("\033[0;31m""enter radius=""\033[0m");
scanf("%f",&r);

printf("area of circle=%f\n",pi*r*r);

printf("circumference of circle=%f\n",2*pi*r);

return 0;
}