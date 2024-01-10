#include<stdio.h>
void square(int n);
int main()
{
    int n;
    printf("enter number= ");
    scanf("%d",&n);

    square(n);    //argument or actual parameter

    return 0;
}

void square(int n)    //parameter or formal parameter
{
    int square = n*n;
    printf("square is %d",square);
}