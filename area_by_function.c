#include<stdio.h>
int rectangle(int l, int b);
int square(int a);
float circle(int r);

int main()
{
    int l,b,a;
    int r;

    printf("enter l = ");
    scanf("%d",&l);

    printf("enter b = ");
    scanf("%d",&b);

    printf("area of rectangle=%d\n",rectangle(l,b));


    printf("enter side a = ");
    scanf("%d",&a);

    printf("area of square=%d\n",square(a));


    printf("enter radius r = ");
    scanf("%d",&r);

    printf("area of circle=%f\n",circle(r));

return 0;
}

int rectangle(int l,int b)
{
    int area=l*b;
    return area;
}

int square(int a)
{
    return a*a;

}

float circle( int r)
{
    return 3.14*r*r;
   
}