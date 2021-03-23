#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    printf("SHAARANG SINGH\n19BCT0215\n");
    printf("Enter a string\n");
    char a[100];
    scanf("%[^\n]s",a);
    strlwr(a);
    int n = strlen(a);
    int b[26];
    for(int i=0; i<26; i++)
    {
        b[i]=0;
    }
    int f=0;
    for(int i=0; i<n; i++)
    {
        f = a[i] - 97;
        if(b[f]==0)
        {
            b[f]=1;
        }
        else
        {
            printf("Not an Isogram\n");
            exit(0);
        }
    }
    printf("Isogram\n");
    return 0;
}