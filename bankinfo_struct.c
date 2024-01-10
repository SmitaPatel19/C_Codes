#include<stdio.h>
#include<string.h>

int n;

typedef struct bank
{
    int srno;
    char name[100];
    int acc;
}ba;

void printinfo(ba b[]);

int main()
{
    printf("n = ");
    scanf("%d",&n);

    ba b[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter details of %d customer = \n",(i+1));
        scanf("%d\n", &b[i].srno);            // \n lgana pdega to input string 
        fgets(b[i].name,100,stdin);
        //scanf("%s\n",b[i].name);
        scanf("%d",&b[i].acc);
    }

    printinfo(b);
return 0;
}

void printinfo(ba b[])
{
    for(int i=0;i<n;i++)
    {
        printf("Details of %d customer = \n",(i+1));
        printf("serial no. = %d\n", b[i].srno);
        printf("name = %s",b[i].name);
        printf("account no. = %d\n",b[i].acc);
    }
    printf("\n\n");
}