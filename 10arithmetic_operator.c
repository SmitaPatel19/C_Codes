#include<stdio.h>
int main()
{
  char ch;
  printf("enter operator = ");
  scanf("%c",&ch);
  switch(ch){
    case'+': printf("addition=a+b");
    break;
    case'-': printf("substraction=a-b");
    break;
    case'*': printf("multiplication=a*b");
    break;
    case'/': printf("division=a/b");
    break;
    case'%': printf("modulus=a'modulus'b");
    break;
  }
return 0;
}