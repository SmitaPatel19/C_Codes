#include<stdio.h>
int main(){
    char ch;
    printf("Enter character =");
    scanf("%c",& ch);
    if(ch>='A' && ch<='Z'){
        printf("character is upper case");
    }
        else if(ch>='a' && ch<='z'){
            printf("character is lower case");
        }
        else{
           printf("character is not alphabet");
        }
    

    return 0;
}
