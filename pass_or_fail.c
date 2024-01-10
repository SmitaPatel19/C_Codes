#include<stdio.h>
int main(){
    int marks;
    printf("enter marks= ");
    scanf("%d",& marks);
    if(marks>30 && marks<=100){
        printf("Student is pass");
    }

    else if(marks<=30){
        printf("Student is fail");
    }
    else{
        printf("Marks are invalid");
    }
//(marks>30 && marks<=100)? printf("student is pass") : printf("student is fail");
return 0;
}