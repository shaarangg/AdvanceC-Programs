#include<stdio.h>

int main()
{
    printf("Shaarang\n19BCT0215\n");
    FILE *fp1;
    fp1 = fopen("file.txt","r");
    if(fp1==NULL)
        printf("Error openeing the file\n");
    else
    {   
        FILE *fp2;
        fp2 = fopen("file2.txt","w");
        if(fp2==NULL)
            printf("Cannot open the target file\n");
        else
        {
            char ch;
            while(1)
            {
                if(ch==EOF)
                    break;
                ch = fgetc(fp1);
                fputc(ch,fp2);
            }
            fclose(fp1);
            printf("Contents successfully copied to the second file\n");
            fclose(fp2);
        }
    }
    FILE *fp;
    fp = fopen("file2.txt","a");
    if(fp==NULL)
        printf("Cannot open the new file\n");
    else
    {
        fprintf(fp,"\nAppending a new line into the second file");
        printf("Successfully appended in new file\n");
        fclose(fp);
    }
}