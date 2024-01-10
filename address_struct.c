#include<stdio.h>
#include<string.h>

typedef struct address
{
    int house;
    int block;
    char city[100];  
    char state[100];
}ad;

void printinfo(struct address s1);

int main()
{
    
    ad p1;
    p1.house=1;
    p1.block=1;
    strcpy(p1.city,"lucknow");
    strcpy(p1.state,"uttar pradesh");

    ad p2;
    p2.house = 2;
    p2.block = 2;
    strcpy(p2.city, "unnao");
    strcpy(p2.state, "uttar pradesh");

    ad p3;
    p3.house = 3;
    p3.block = 1;
    strcpy(p3.city, "gandhinagar");
    strcpy(p3.state, "gujarat");

    ad p4;
    p4.house=4;
    p4.block=2;
    strcpy(p4.city,"ahemedabad");
    strcpy(p4.state, "gujarat");

    ad p5;
    p5.house = 5;
    p5.block = 5;
    strcpy(p5.city, "vijayvada");
    strcpy(p5.state, "andhra pradesh");

    printinfo(p1);
    printinfo(p2);
    printinfo(p3);
    printinfo(p4);
    printinfo(p5);

    // printf("1st perrson's house no. = %d\n", p1.house);
    // printf("2st person's block = %d\n", p2.block);
    // printf("3st person's city name = %s\n", p3.city);
    // printf("5st person's state name = %s\n", p5.state);

    return 0;
}

void printinfo(struct address s1)
{
    printf("%d\n",s1);
    printf("person's house no. = %d\n", s1.house);
    printf("person's block = %d\n",s1.block);
    printf("person's city name = %s\n",s1.city);
    printf("person's state name = %s\n",s1.state);
}