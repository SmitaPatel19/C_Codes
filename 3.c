#include<stdio.h> 
int main()
{
    int ma,phy,hi,eng,chem;

    printf("enter maths marks=");
    scanf("%d",&ma);

    printf("enter physics marks=");
    scanf("%d",&phy);

    printf("enter hindi marks=");
    scanf("%d",&hi);

    printf("enter english marks=");
    scanf("%d",&eng);

    printf("enter chemistry marks=");
    scanf("%d",&chem);
    
    int sum= ma+phy+eng+chem+hi;
    printf("total marks obtained= %d\n",sum);

    printf("percentage=%d\n",(sum/500)*100);

return 0;
}