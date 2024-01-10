#include<stdio.h>
int main()
{
    FILE *ptr;

    ptr=fopen("1.c","r");

    //char ch;

    // fscanf(ptr,"%c",&ch);
    // printf("character = %c\n",ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(ptr, "%c", &ch);
    // printf("character = %c\n", ch);      

    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));
    printf("character = %c\n", fgetc(ptr));

    fclose(ptr);
    return 0;
}