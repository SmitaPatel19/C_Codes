#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("sum.txt","r");

    int a,b,sum;
    
    fscanf(ptr,"%d",&a);
    printf("%d\n",a);
    
    fscanf(ptr,"%d",&b);
    printf("%d\n", b);
    fclose(ptr);

    ptr=fopen("sum.txt","w");
    sum=a+b;
    fprintf(ptr,"sum = %d\n",sum);
    fclose(ptr);

return 0;
}