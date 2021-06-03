#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    printf("Shaarang\n19BCT0215\n\n");
    char lop[10][3] = {"of", "as", "at", "of", "by", "in", "of", "on", "to", "up"};
    printf("Enter a string: ");
    char str[50];
    fgets(str,50,stdin);
    int l = strlen(str);
    char a[3];
    int f=0;
    for(int i=1; i<l-1; i++)
    {
        a[0] = str[i-1];
        a[1] = str[i+1];
        a[2] = '\0';
        for(int j=0; j<10; j++)
        {
            if(strcmp(a,lop[j])==0)
            {
                f+=1;
                if(f==1)
                {
                    printf("Letter whose left and right character form a preposition are:\n");
                }
                printf("%c\n",str[i]);
                break;
            }
        }
    }
    if(f==0)
    {
        printf("The string does not contain any letter whose left and right character form a preposition\n");
    }
}