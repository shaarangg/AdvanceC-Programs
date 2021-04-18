#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *ptr;
    char ch;
    int cc=0, ct=0, cn=0, cs=0;
    ptr = fopen("file.txt","r");
    if(ptr==NULL)
        printf("File could not be open\n");
    else
    {
        while (1)
        {
            ch = fgetc(ptr);
            if(ch==EOF)
                break;
            
            if(isalpha(ch))
                cc+=1;
            if(ch==' ')
                cs+=1;
            if(ch=='\t')
                ct+=1;
            if(ch=='\n')
                cn+=1;
        }
        fclose(ptr);
        printf("Character Count: %d\n",cc);
        printf("Space Count: %d\n",cs);
        printf("Number of tabs: %d\n",ct);
        printf("Number of lines: %d\n",cn+1);
    }
}