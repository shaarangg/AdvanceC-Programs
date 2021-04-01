#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *f;
    char ch;
    int n=1,w=1,t=0,l=0;
    f = fopen("hello.txt","r");
    if(f==NULL)
    {
        printf("File not found");
        exit(0);
    }
    while(1)
    {
        ch = fgetc(f);
        if(ch==EOF)
        {
            break;
        }
        if(ch=='\n')
        {
            n+=1;
        }
        else if(ch==' ')
        {
            w+=1;
        }
        else if(ch=='\t')
        {
            t+=1;
        }
        else
        {
            l+=1;
        }
    }
    printf("No. of characters are : %d\n",l);
    printf("No. of words are : %d\n",w);
    printf("No. of tabs are : %d\n",t);
    printf("No. of lines are : %d\n",n);
}