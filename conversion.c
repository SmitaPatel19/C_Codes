#include<stdio.h>
int main()
{
    int n;
    float x,y,a,b;

    printf("enter 1 to convert m in km\n");
    printf("enter 2 to convert m in cm\n");
    printf("enter 3 to convert m in miles\n");
    printf("enter 4 to convert m in inches\n");

    printf("enter choice= ");
    scanf("%d",&n);

    switch(n)
    {
        case 1: printf("enter x in m to convert in km =");
                scanf("%f",&x);
                printf("%f in km is %f",x,0.001*x);
                break;
        case 2: printf("enter y in m to convert in cm =");
                scanf("%f",&y);
                printf("%f in cm is %f",y,y*100);
                break;
        case 3: printf("enter a in m to convert in miles =");
                scanf("%f",&a);
                printf("%f in miles is %f",a,a*0.00062);
                break;
        case 4: printf("enter b in m to convert in inches =");
                scanf("%f",&b);
                printf("%f in inches is %f",b,b*39.37);
                break;

        default: printf("wrong choice entered\n");
                
    }
return 0;
}