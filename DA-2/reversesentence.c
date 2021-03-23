#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char *a,int i,int n){
    if(i==n-1){
        return;
    }
    else{
        rev(a,i+1,n);
        printf("%c",a[i]);
    }
}
int main(){
    char a[100];
    printf("Shaarang Singh\n19BCT0215\n");
    printf("Enter a sentence\n");
    fgets(a,100,stdin);
    int i=0,n=strlen(a);
    rev(a,i,n);
    return 0;
}