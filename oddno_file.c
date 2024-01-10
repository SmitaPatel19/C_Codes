#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("odd.txt","w");

    int n;
    printf("n = ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            fprintf(ptr,"%d\t",i);
        }
    }
    printf("numbers are entered in file....check file.");
    fclose(ptr);
return 0;
}