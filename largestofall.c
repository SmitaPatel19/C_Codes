#include<stdio.h>
int main()
{
    int n,count=0;
    int num[200];

    printf("to stop entering number press '0'.\n");

    printf("enter numbers = \n");
    for(int i=0;;i++)
    {
        count++;
        scanf("%d, ",&n);
        num[i]=n;

        if(n==0)
        {
            printf("you stopped.\n");
            break;
        }
    }

    int max=num[0];

    for(int i=0;i<count-1;i++)
    {
        //printf("num[%d]=%d, ",i,num[i]);
        if(max<num[i])
        {
            max=num[i];
        }
    }
    printf("Largest of all the numbers is = %d",max);
return 0;
}