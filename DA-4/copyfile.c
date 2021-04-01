#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *f1,*f2;
    char ch;
    int n=1,w=1,t=0,l=0;
    f1 = fopen("hello.txt","r");
    if(f1==NULL)
    {
        printf("File 1 not found\n");
        exit(0);
    }
    f2 = fopen("hello1.txt","w");
    if(f2==NULL)
    {
        printf("File 2 not found\n");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(f1);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch,f2);
    }
    printf("File successfully written\n");
    fclose(f1);
    fclose(f2);
    return 0;
}