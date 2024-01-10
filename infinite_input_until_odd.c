#include<stdio.h>
int main()
/*{
    int n;
    do{
        printf("enter number=");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }while(1);
     printf("now it's odd");
     printf("THANK YOU");
return 0;
}*/
{
    int n;
    for(int i=1;1;){
        printf("enter number = ");
        scanf("%d",&n);
        if(n%2!=0){
        printf("now it's odd\n");
        printf("THANK YOU\n");
        break;
        }
    }
return 0;
}