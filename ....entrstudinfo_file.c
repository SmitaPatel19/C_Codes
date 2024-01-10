#include<stdio.h>
#include<string.h>

typedef struct studentinfo
{
    char name[200];
    int id;
    char branch[200];
}st;

int main()
{
    int n;
    printf("enter number of students,n = ");
    scanf("%d",&n);
    FILE *info;

    st s[n];

    //info=fopen("file.txt","w");
    printf("enter details of students:\nname\nstudent id\nbranch\n\n");

    for(int i=0;i<n;i++)
    {
        printf("Enter details of %d student : \n",(i+1));
        //scanf("%d\n", &s[i].id);
        fgets(s[i].name,200,stdin);
        scanf("%d",&s[i].id);
        fgets(s[i].branch,200,stdin);
    }

    //fclose(info);
    return 0;
}