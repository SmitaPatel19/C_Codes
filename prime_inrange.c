
#include<stdio.h>
int main()
{
    int a,b;

    printf("enter where to start,a =");
    scanf("%d",&a);

    printf("enter where to end,b =");
    scanf("%d",&b);

    for(int i=a;i<=b;i++)
    { 
        int cout=0;  
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                cout++;
            }
        }
        if(cout==0)
        {
             printf("%d ,",i);
        }
    }
return 0;
}