#include<stdio.h>

typedef struct student
{
    int roll;
    char name[100];
    int attd;
    float cgpa;
}st;

typedef struct teachers
{
    int srno;
    char name[100];
    char sub[100];
}te;

void printstud(st s[]);
void printteach(te t[]);

int n,m;

int main()
{
    st s[n];
    te t[m];

    printf("Number of students,n = ");
    scanf("%d", &n);

    printf("Number of teachers,m = ");
    scanf("%d", &m);
    if(n>0)
    {
        printf("\nEnter details of students as : \nroll no.\nname\nattendance\nCGPA\n\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter details of %d student = \n",(i+1));
        scanf("%d\n",&s[i].roll);
        fgets(s[i].name,100,stdin);
        scanf("%d",&s[i].attd);
        scanf("%f",&s[i].cgpa);
    }

    if (m>0) printf("\nEnter details of teachers as : \nserial number\nname\nsubject\n\n");
    for(int i=0;i<m;i++)
    {
        printf("Enter details of %d teacher = \n",(i+1));
        scanf("%d\n",&t[i].srno);
        fgets(t[i].name,100,stdin);
        fgets(t[i].sub,100,stdin);
    }

    printstud(s);
    printteach(t);

    return 0;
}

void printstud(st s[])
{
    if(n>0)
    {
    printf("\n******PRINTING DETAILS OF STUDENT******\n\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("Details of %d student :\n",(i+1));
        printf("roll no. = %d\n",s[i].roll);
        printf("name = %s",s[i].name);
        printf("attendance  = %d\n",s[i].attd);
        printf("CGPA = %.2f\n\n",s[i].cgpa);
    }
    printf("\n\n");
}

void printteach(te t[])
{
    if(m>0)
    printf("******PRINTING DETAILS OF TEACHER******\n\n");
    for(int i=0;i<m;i++)
    {
        printf("Details of %d teacher :\n",(i+1));
        printf("Sr no. = %d\n",t[i].srno);
        printf("name = %s",t[i].name);
        printf("subject teach = %s\n",t[i].sub);
    }
    printf("\n\n");
}