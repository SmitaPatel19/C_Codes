#include<stdio.h>
int main(){
    
    char day;
    printf("enter day = ");
    scanf("%c", &day);

    switch (day) {
        case 'm' : printf("monday\n");
        break;
        case 'T': printf("tuesday\n");
        break;
        case 'w' : printf("wednesday\n");
        break;
        case 't': printf("thursday\n");
        break;
        case 'f' : printf("friday\n");
        break;
        case 's': printf("saturday\n");
        break;
        case 'S': printf("sunday\n");
        break;
        default: printf("not a valid  input");
        
    }

    return 0;

}