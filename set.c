#include<stdio.h>
#include<math.h>

void product(char a[10],int b[5]);
void unio(char a[10], int b[5]);
int power(int n);

    int main()
{
    int i,j,k;
    char u[100]={'s','m','i','t','a','p','a','t','e','l','0','1','2','3','4','5','6','7','8','9'};
    char a[10] = { 's','m','i','t','a','p','a','t','e','l'};
    int b[5]={2,0,5,1,9};

    printf("A = { ");
    for(int i=0;i<10;i++)
    {
        printf("%c,",a[i]);
    }
    printf(" }\n");

    printf("B = { ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", b[i]);
    }
    printf(" }\n");

    product(a,b);
    unio(a,b);
    printf("P(A U B) = %d",power(15));
    return 0;
}

void product(char a[10],int b[5])
{
    printf("A X B = { ");
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            printf("(%d,%c), ", b[i], a[k]);
        }
    }
    printf(" }\n");
}

void unio(char a[10],int b[5])
{
    printf("A U B = { ");
    for(int i=0;i<5;i++)
    {
        printf("%d,",b[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%c,",a[i]);
    }
    printf(" }\n");
}

int power(int n)
{
    int card=pow(2,n);
    return card;
}