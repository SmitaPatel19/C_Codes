#include<stdio.h>
#include<stdbool.h>

int main()
{
  // {
  //     int i=7;
  //     {
  //         int i=20,j=34;
  //         printf("%d%d",i,j);
  //     }
  // printf("%d%d",i,j); // compilation error as j is not defined.
  // }

  //int i=234;
  //int i=134;
  //printf("abc! %d\n",i);  //compilation error as i is defined twice.

  //int i=0b110;   // binary representation.
  //printf("\n%d",i);  //convert in normal.

  //int k;
  //{
  //  int k;
  //  for(k=0;k<10;k++);
  //} //runs without error.

  //  bool arr[10]={true,false};
  //  printf("%ld\n",sizeof(arr));  //ans-10
  //  
  //  int a=3,b=2;
  //  int c=5;
  //  int i=a>b ? a>c ?a:c:b>c?b:c;
  //  printf("i=%d",i); //ans-5

    int n=10,c;
    int a=22;
    int b=11;

    c=(-n) ? a:b;
    printf("%d",c);  // ans=22
return 0;
}