#include<stdio.h>
int main()
{
    FILE *ptr;

    ptr=fopen("file.txt","w");

    //fprintf(ptr, "%c", 'm');
    //fprintf(ptr, "%c", 'a');
    //fprintf(ptr, "%c", 'n');
    //fprintf(ptr, "%c", 'g');
    //fprintf(ptr, "%c", 'o');
    //fprintf(ptr, "%c", '.');

    fputc('m', ptr);
    fputc('a', ptr);
    fputc('n', ptr);
    fputc('g', ptr);
    fputc('o', ptr);
    fputc('.', ptr);

    fclose(ptr);
    return 0;
}